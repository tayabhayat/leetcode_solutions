class Solution {
public:
    bool isPalindrome(int x) {
        int num = x;
        int ld;
        long long rev = 0;
        if(x < 0) return false;
        while(x !=0 ){
            ld = x % 10;
            rev = rev * 10 + ld;
            x = x / 10;
        }
        if(rev == num)return true;
        else return false;
    }
};