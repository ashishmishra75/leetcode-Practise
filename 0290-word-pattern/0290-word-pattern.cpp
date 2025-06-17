class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> charToWord;
        unordered_map<string, char> wordToChar;

        int i = 0, n = s.size(), p = 0;
        while (i < n && p < pattern.size()) {
            // Extract the next word
            int start = i;
            while (i < n && s[i] != ' ') ++i;
            string word = s.substr(start, i - start);
            ++i;

            char ch = pattern[p++];

            if (charToWord.count(ch)) {
                if (charToWord[ch] != word) return false;
            } else {
                charToWord[ch] = word;
            }

            if (wordToChar.count(word)) {
                if (wordToChar[word] != ch) return false;
            } else {
                wordToChar[word] = ch;
            }
        }

        // If either pattern or words left unprocessed
        if (p != pattern.size() || i < n) return false;

        return true;
    }
};