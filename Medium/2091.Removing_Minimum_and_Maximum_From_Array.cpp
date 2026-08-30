class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minindex = 0;
        int n = nums.size();
        int maxindex = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > nums[maxindex]){
                maxindex = i;
            }

            if(nums[i] < nums[minindex]){
                minindex = i;
            }
        }

        int left = min(minindex, maxindex);
        int right = max(minindex, maxindex);

        // Both from left
        int option1 = right + 1;

        // Both from right
        int option2 = n - left;

        // One from left, one from right
        int option3 = (left + 1) + (n - right);

        return min({option1, option2, option3});
    }
};