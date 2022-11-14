#include <string>
#include <unordered_map>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        
        std::unordered_map<char, int> characterIndexMap;
        
        int beginIdx  = 0;
        int maxLength = 0;
        
        int subMaxLength = 0;
        
        const int strLength = s.size();
        
        for (int idx = 0; idx < strLength; idx++)
        {
            auto findResult = characterIndexMap.find(s[idx]);
            if (findResult != characterIndexMap.end())
            {
                if (findResult->second < beginIdx)
                {
                    characterIndexMap[s[idx]] = idx;
                    continue;
                }
                
                if (maxLength < idx - beginIdx)
                    maxLength = idx - beginIdx;
                
                beginIdx = findResult->second + 1;
                characterIndexMap[s[idx]] = idx;
            }
            else
            {
                characterIndexMap[s[idx]] = idx;
            }
        }
        
        if (maxLength < strLength - beginIdx)
            maxLength = strLength - beginIdx;
        
        return maxLength;
        
    }
};