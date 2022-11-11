#include <vector>

class Solution {
public:
    int maxArea(std::vector<int>& height) {
        
        int left = 0;
        int right = height.size()-1;
        
        int result = 0;
        
        while (left < right)
        {
            int nowWater = (right - left) * (height[right] < height[left] ? height[right] : height[left]);
            if (result < nowWater)
                result = nowWater;
            
            int before = height[left] < height[right] ? height[left] : height[right];
            
            if (height[left] < height[right])
                while(left < right && height[++left]  <= before);
            else
                while(left < right && height[--right] <= before);
            
        }
        
        return result;
    }
};