class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int product, maxProduct = INT_MIN;
        sort(nums.begin(), nums.end());
        int n = nums.size() - 1;
        int product1 = nums[n] * nums[n - 1] * nums[n - 2];
        int product2 = nums[0] * nums[1] * nums[n];
        return max(product1, product2);
    }
};

// class Solution {
// public:
//     int maximumProduct(vector<int>& nums) {
//         int product, maxProduct = INT_MAX;
//         sort(nums.begin(), nums.end());
//         for(int i = 0; i < nums.size(); i++){
//             int j = i + 1, k = nums.size() - 1;
//             while(j < k){
//             product = nums[i] * nums[j] * nums[k];
//             if(product > maxProduct){
//                 maxProduct = product;
//                 }
//                 j++;
//             }
//         }
//         return maxProduct;
//     }
// };