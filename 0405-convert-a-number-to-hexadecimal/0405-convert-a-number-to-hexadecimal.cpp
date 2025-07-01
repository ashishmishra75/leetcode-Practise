class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";

        string hexDigits = "0123456789abcdef";
        string result = "";
        unsigned int n = num;  // handles negative numbers correctly

        while (n > 0) {
            int digit = n & 0xf;            // get last 4 bits
            result = hexDigits[digit] + result;  // prepend
            n >>= 4;                        // shift by 4 bits
        }

        return result;
    }
};