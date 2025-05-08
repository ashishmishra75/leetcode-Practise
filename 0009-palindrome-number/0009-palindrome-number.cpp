class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        int reversed = 0;
        int temp = x;

        while(x != 0){
            int lastdigit = x % 10;

             // Check for overflow before multiplying
            if (reversed > (INT_MAX - lastdigit) / 10)
                return false; // would overflow 
                
            reversed = reversed * 10 + lastdigit;
            x/=10;
        }
        return temp == reversed ;
    }
};