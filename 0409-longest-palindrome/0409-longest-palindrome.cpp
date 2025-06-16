class Solution {
public:
    int longestPalindrome(string s) {
         unordered_map<char, int> freq;
        
        for (char c : s) {
            freq[c]++;
        }

        int length = 0;
        bool oddFound = false;

        for (auto& pair : freq) {
            int count = pair.second;
            length += (count / 2) * 2;  // Use even part of each character

            if (count % 2 == 1) {
                oddFound = true; // We can put one odd character in the center
            }
        }

        if (oddFound) length += 1;

        return length;
    }
};