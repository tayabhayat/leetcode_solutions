class Solution {
public:
    int mySqrt(int x) {
        long long int left = 0;
        long long int right = x;
        int ans = 0;
        while(left <= right){
           long long int mid = (left + right)/2;
            if(mid * mid == x){
                return mid;
            }
            else if(mid * mid < x){
                ans = mid;
                left = left + 1;
            }
            else
                right = mid - 1;
        }
        return ans;
    }
};