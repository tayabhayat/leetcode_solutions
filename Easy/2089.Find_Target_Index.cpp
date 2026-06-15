class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> result;
        int less = 0;
        int equal = 0;
        for(int x : nums){
            if(x < target)
                less++;
            else if (x == target)
                equal++;
        }
        for(int i = 0; i < equal; i++){
            result.push_back(less + i);
        }
        return result;
    }
};
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> result;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target){
                result.push_back(i);
            }
        }
        // sort(result.begin(), result.end());
        return result;
    }
};