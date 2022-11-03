class Solution {
    
    using AlphabetSet = std::array<int, 26>;
    
public:
    bool isAnagram(string left, string right) {
        
        AlphabetSet leftSet;
        AlphabetSet rightSet;
        
        leftSet.fill(0);
        rightSet.fill(0);
        
        for (char ch : left)  leftSet[ch-'a']++;
        for (char ch : right) rightSet[ch-'a']++;
        
        for (int idx = 0; idx < 26; idx++)
            if (leftSet[idx] != rightSet[idx]) return false;
        
        return true;
    }
};