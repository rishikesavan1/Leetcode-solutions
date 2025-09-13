class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map <char,int> mp;
        for(auto c : s) mp[c]++;

        int consonant_max = 0,vowel_max = 0; 
        for(auto [c,i] : mp){
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                vowel_max = max(i,vowel_max);
            else
                consonant_max = max(i,consonant_max);
        }
        return vowel_max + consonant_max;
    }
};