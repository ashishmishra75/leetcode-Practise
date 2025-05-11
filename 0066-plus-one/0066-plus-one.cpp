class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
          int n = digits.size();
        
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;        // Just add one if it's < 9
                return digits;
            }
            digits[i] = 0;          // If 9, set to 0 and carry over
        }
        
        // If we reached here, all digits were 9 (e.g., 999 → 1000)
        digits.insert(digits.begin(), 1);
        return digits;
    }
};