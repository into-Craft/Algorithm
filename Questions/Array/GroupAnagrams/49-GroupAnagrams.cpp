#include <array>
#include <vector>
#include <unordered_map>
#include <string>
#include <iostream>
#include <sstream>

class Solution {
    
private:
    using AlphabetSet = std::array<int, 26>;
    using ResultType  = std::vector<std::vector<std::string>>;
    
    std::ostringstream stringBuffer;

    AlphabetSet analyzeAnagram(const std::string& target)
    {
        AlphabetSet result;
        
        result.fill(0);
        
        for (char ch : target)  result[ch-'a']++;

        return result;
    }
    std::string convertAlphabetSetToString(const AlphabetSet& alphabetSet)
    {
        stringBuffer.str("");
        stringBuffer.clear();
        
        for (int alphabet : alphabetSet)
        {
            stringBuffer << alphabet << ",";
        }

        return stringBuffer.str();
    }
    
public:
    ResultType groupAnagrams(std::vector<std::string>& strs) {
        
        ResultType result;

        std::unordered_map<std::string, std::vector<std::string>> groupAnagramMap;

        for (auto& str : strs)
        {
            const AlphabetSet alphabetSet     = analyzeAnagram(str);
            const std::string anagramHashKey  = convertAlphabetSetToString(alphabetSet);

            auto findResult = groupAnagramMap.find(anagramHashKey);
            if (findResult == groupAnagramMap.end())
            {
                groupAnagramMap.insert(std::make_pair(anagramHashKey, std::vector<std::string>{str}));
            }
            else
            {
                findResult->second.push_back(str);
            }
        }

        for (auto& groupAnagram : groupAnagramMap)
        {
            result.push_back(groupAnagram.second);
        }

        return result;

    }
};