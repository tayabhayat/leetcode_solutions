class Solution {
public:
    int maxProduct(int n) {
        vector<int> nums;
        while(n > 0){
            nums.push_back(n % 10);
            n /= 10;
        }
        int size = nums.size() - 1;
       sort(nums.begin(), nums.end());
       int maxproduct = nums[size] * nums[size - 1];
       return maxproduct;
    }
};