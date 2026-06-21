class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        int start = 0;
        int first = -1;
        int end = nums.size() - 1;
        int mid = 0;
        int last = -1;
        while(start <= end){
            mid = (start + end) / 2;
            if(nums[mid] == target){
                first = mid;
                end = mid - 1;
            }
            else if (nums[mid] > target){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        result.push_back(first);
        start = 0; end = nums.size() - 1;

        while(start <= end){
            mid = (start + end) / 2;
            if(nums[mid] == target){
                last = mid;
                start = mid + 1;
            }
            else if (nums[mid] > target){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        result.push_back(last);

        return result;
    }
};