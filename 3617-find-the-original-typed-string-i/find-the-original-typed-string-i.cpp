class Solution {
public:
    int possibleStringCount(string word) {
        int count = 1;
        for(char i = 0 ; i < word.size()-1;i++) // char works in terms of ASCII value starts from 0 to 127 it optimize the space and time
            if(word[i] == word[i+1])
                count++;
        return count;
    }
};