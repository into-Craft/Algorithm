#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        
        std::unordered_map<int, std::vector<int>> numMap;
        
        const int numSize = nums.size();
        for (int idx = 0; idx < numSize; idx++)
        {
            auto findResult = numMap.find(nums[idx]);
            if (findResult == numMap.end())
                numMap.insert(make_pair(nums[idx], std::vector<int>{idx}));
            else
                numMap[nums[idx]].push_back(idx);
        }
        
        for (int idx = 0; idx < numSize; idx++)
        {
            const int now  = nums[idx];
            const int left = target - nums[idx];
            
            auto findResult = numMap.find(left);
            if (findResult == numMap.end()) continue;
            
            for (int jdx : findResult->second)
                if (idx != jdx) return std::vector<int>{idx, jdx};
        }
        
        return std::vector<int>();
    }
};