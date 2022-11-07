#include <vector>

class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        
        int numSize = nums.size();
        
        int zeroCount = 0;
        int zeroIdx = 0;
        int numProductExceptZeros = 1;
        
        for (int idx = 0; idx < numSize; idx++)
        {
            if (nums[idx] == 0) 
            {
                zeroCount++;
                zeroIdx = idx;
            }
            else
                numProductExceptZeros *= nums[idx];
        }
        
        std::vector<int> result;

        if (zeroCount == 0)
        {
            result.reserve(numSize);
            
            for (int num : nums)
                result.push_back(numProductExceptZeros / num);
        }
        else
        {
            result.resize(numSize);
            
            std::fill(result.begin(), result.end(), 0);
            if (zeroCount == 1)
                result[zeroIdx] = numProductExceptZeros;
        }
        
        return result;
    }
};