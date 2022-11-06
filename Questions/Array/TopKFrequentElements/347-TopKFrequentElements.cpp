#include <vector>
#include <queue>
#include <algorithm>

class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        std::sort(nums.begin(), nums.end());

        std::vector<int> result;
        
        int nowNum  = nums[0];
        int count   = 0;
        
        struct compareFunc {
            bool operator()(std::pair<int, int> a, std::pair<int, int> b) {
                return a.first < b.first;
            }
        };
        
        std::priority_queue< std::pair<int, int>, std::vector<std::pair<int,int> >, compareFunc > pq;
        
        for (int num : nums)
        {
            if (num == nowNum)
            {
                count++;
                continue;
            }
            
            pq.push(std::make_pair(count, nowNum));
            
            nowNum  = num;
            count   = 1;
        }
        
        pq.push(std::make_pair(count, nowNum));
        
        for (int idx = 0; idx < k; idx++)
        {
            result.push_back(pq.top().second);
            pq.pop();
        }
        
        return result;
    }
};