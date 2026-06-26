class Solution {
public:
    int reverse(int x) {
        long long reverse = 0;
        int num, last_digit;
        while(x != 0){
            last_digit = x % 10;
            if (reverse > INT_MAX / 10 || (reverse == INT_MAX / 10 && last_digit > 7)) return 0;
            if (reverse < INT_MIN / 10 || (reverse == INT_MIN / 10 && last_digit < -8)) return 0;
            reverse = reverse * 10 + last_digit;
            x /= 10;
        }
        return reverse;
    }
};