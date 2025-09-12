class Solution {
public:
    bool doesAliceWin(string s) {
        int vowel_count = 0;
        string vowels = "aeiou";
        for(auto c : s)
            if(vowels.find(c) != string::npos)
                vowel_count++;
        return vowel_count ? true : false;
    }
};