class Solution {
public:
    bool isPalindrome(int x) {
        int orignal = x;
        int digit = 0;
        long long reverse = 0;
        while (x > 0) {
            digit = x % 10;
            x = x / 10;
            reverse = reverse * 10 + digit;
        }
        if (reverse != orignal) {
            return false;
        }
        return true;
    }
};