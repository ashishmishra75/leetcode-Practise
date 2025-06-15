class Solution {
public:
    string reverseOnlyLetters(string s) {
          int left = 0, right = s.size() - 1;

        while (left < right) {
            // Move left pointer if not a letter
            if (!isalpha(s[left])) {
                left++;
            }
            // Move right pointer if not a letter
            else if (!isalpha(s[right])) {
                right--;
            }
            // Both are letters: swap
            else {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }

        return s;
    }
};