class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map <char,int> mp;
        for(auto c : s) mp[c]++;

        int consonant_max = 0,vowel_max = 0; 
        for(auto [c,i] : mp){
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                vowel_max = max(vowel_max , i);
            else
                consonant_max = max(consonant_max,i);
        }
        return vowel_max + consonant_max;
    }
};