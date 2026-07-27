// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         int first = -1, second = -1;
//         int max = INT_MIN;
//         for(int i = 0; i < nums.size(); i++){
//             for(int j = i + 1; j < nums.size(); j++){
//                 if(nums[i] * nums[j] > max){
//                 max = nums[i] * nums[j];
//                 first = i; second = j;
//             }
//             }
//         }
//         return (nums[first] - 1) * (nums[second] - 1);
//     }
// };
// Optimized solution
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int first = 0, second = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] >= first){
                second = first;
                first = nums[i];
            }
            else if (nums[i] > second){
                second = nums[i];
            }
        }
        return (first - 1) * (second - 1);
    }
};