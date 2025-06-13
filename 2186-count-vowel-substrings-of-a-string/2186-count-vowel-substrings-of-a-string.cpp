class Solution {
public:
bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    int countVowelSubstrings(string word) {
        int count = 0;
        int n = word.size();

        for (int i = 0; i < n; ++i) {
            unordered_set<char> vowels;
            for (int j = i; j < n; ++j) {
                if (!isVowel(word[j])) break;
                vowels.insert(word[j]);
                if (vowels.size() == 5) count++;
            }
        }

        return count;
    }
};