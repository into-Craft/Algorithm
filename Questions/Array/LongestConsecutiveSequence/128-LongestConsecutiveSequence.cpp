#include <vector>
#include <unordered_set>

class Solution {
public:
    int longestConsecutive(std::vector<int>& nums) {
        
        std::unordered_set numSet(nums.begin(), nums.end());
        
        int maxSequenceLength = 0;
        
        for (auto num : numSet)
        {
            if (numSet.find(num-1) != numSet.end())
                continue;
            
            int sequenceLength = 1;
            
            while (numSet.find(++num) != numSet.end())
                sequenceLength++;
            
            if (maxSequenceLength < sequenceLength)
                maxSequenceLength = sequenceLength;
        }
        
        return maxSequenceLength;
    }
};