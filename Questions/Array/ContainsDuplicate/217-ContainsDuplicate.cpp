class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
     
        std::unordered_map<int, std::vector<int>> chainedHashBucket;
        
        for (int num : nums)
        {
            auto findResult = chainedHashBucket.find(num);
            if (findResult == chainedHashBucket.end())
            {
                chainedHashBucket.insert(std::make_pair(num, std::vector<int>{num}));
            }
            else
            {
                for (int sameHashNumber : findResult->second)
                    if (sameHashNumber == num) return true;
                
                findResult->second.push_back(num);
            }       
        }
        
        return false;
    }
};
