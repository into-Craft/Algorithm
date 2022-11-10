#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& numbers, int target) {
        
        std::vector<int> result(2);
        std::unordered_map<int, int> numberMap;
        
        int numSize = numbers.size();
        
        for (int idx = 0; idx < numSize; idx++)
        {
            auto findResult = numberMap.find(target - numbers[idx]);
            if (findResult == numberMap.end())
            {
                numberMap[numbers[idx]] = idx;
                continue;
            }
            
            result[0] = findResult->second + 1;
            result[1] = idx + 1;
        }
        
        return result;
    }
};