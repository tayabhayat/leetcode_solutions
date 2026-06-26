class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1, i = 0, j = 0;
        int size = nums.size();
        while(i < size - 1){
            if(nums[i] != nums[i + 1]){
            nums[j + 1] = nums[i+1];
            k++;
            j++;
        }
            i++;
        }
        return k;
    }
};