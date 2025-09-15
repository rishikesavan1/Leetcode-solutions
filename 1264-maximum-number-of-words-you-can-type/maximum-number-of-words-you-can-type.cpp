class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        std::unordered_set<char> broken_set(brokenLetters.begin(), brokenLetters.end());
        std::stringstream ss(text);
        std::string word;
        int typeable_word_count = 0;

        while (ss >> word) {
            bool is_typeable = true;
            for (char c : word) {
                if (broken_set.count(c)) {
                    is_typeable = false;
                    break; 
                }
            }
            
            if (is_typeable) {
                typeable_word_count++;
            }
        }

        return typeable_word_count;
    }
};