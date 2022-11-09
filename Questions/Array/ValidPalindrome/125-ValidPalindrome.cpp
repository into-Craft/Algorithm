#include <string>

class Solution {
public:
    
    bool isAlphaNumeric(char ch)
    {
        if (('A' <= ch && ch <= 'Z')
        ||  ('a' <= ch && ch <= 'z')
        ||  ('0' <= ch && ch <= '9'))
        {
            return true;
        }
        
        return false;
    }
    
    bool isSameAlphanumeric(char left, char right)
    {
        if (left == right) return true;
        
        if (('0' <= left  && left <= '9')
        ||  ('0' <= right && right <= '9')) 
        {
            return false;
        }
        
        const int diff = left > right ? left - right : right - left;
        if (diff == 32) return true;
        
        return false;
    }
    
    bool isPalindrome(std::string s) {
        
        int lIdx = 0;
        int rIdx = s.size() - 1;
        
        while(lIdx < rIdx)
        {
            for (; lIdx < rIdx; lIdx++)
            {
                if (isAlphaNumeric(s[lIdx]) == false) continue;
                break;
            }

            for (; lIdx < rIdx; rIdx--)
            {
                if (isAlphaNumeric(s[rIdx]) == false) continue;
                break;
            }
            
            if (lIdx == rIdx) return true;
            
            if (isSameAlphanumeric(s[lIdx], s[rIdx]) == false) return false;
            
            lIdx++;
            rIdx--;
        }
        
        return true;
    }
};