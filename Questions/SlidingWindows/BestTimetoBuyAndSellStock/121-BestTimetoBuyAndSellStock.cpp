#include <vector>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int result = 0;
        
        const int pricesSize = prices.size();
        std::vector<int> untilNow(pricesSize);
        
        int min = prices[0];
        for (int idx = 0; idx < pricesSize; idx++)
        {
            if (min > prices[idx])
                min = prices[idx];
            
            untilNow[idx] = min;
        }
        
        int max = prices[pricesSize-1];
        for (int idx = pricesSize-1; idx >= 0; idx--)
        {
            if (max < prices[idx])
                max = prices[idx];
            
            if (result < max - untilNow[idx])
                result = max - untilNow[idx];
        }
        
        return result;
    }
};