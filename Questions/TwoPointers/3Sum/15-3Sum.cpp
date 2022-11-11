#include <vector>
#include <unordered_map>
#include <set>

class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {

        std::unordered_map<int, int>    numMap;
        std::set<int>                   numSet;
        
        const int numSize = nums.size();
        for (int num : nums)
        {
            numSet.insert(num);
            
            auto findResult = numMap.find(num);
            if (findResult != numMap.end())
                findResult->second++;
            else
                numMap[num] = 1;
        }
        
        std::vector<std::vector<int>> result;
        
        std::vector<int> orderedNum(numSet.begin(), numSet.end());
        const int orderedNumSize = orderedNum.size();
        
        for (int idx = 0; idx < orderedNumSize; idx++)
        {            
            for (int jdx = idx+1; jdx < orderedNumSize; jdx++)
            {
                const int target = -orderedNum[idx]-orderedNum[jdx];
                
                if (orderedNum[idx] >= target || orderedNum[jdx] >= target)
                    continue;
                
                auto findResult = numSet.find(target);
                if (findResult == numSet.end())
                    continue;
                
                result.push_back(std::vector<int>{orderedNum[idx],orderedNum[jdx],target});
            }

            if (numMap[orderedNum[idx]] == 1)
                continue;
            
            int target = -orderedNum[idx]-orderedNum[idx];
            if (target == 0 && numMap[0] < 3)
                continue;
            
            auto findResult = numSet.find(target);
            if (findResult == numSet.end())
                continue;
            
            result.push_back(std::vector<int>{orderedNum[idx],orderedNum[idx],target});
        }
        
        return result;
    }
};