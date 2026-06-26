class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> answer;
        int leftSum = 0;
        int rightSum = 0;
        int totalSum = 0;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            totalSum += nums[i];
        }
        for(int i = 0; i < nums.size(); i++){
            rightSum = totalSum - leftSum - nums[i];
            sum = abs(leftSum - rightSum);
            answer.push_back(sum);
            leftSum += nums[i];
        }

        
        return answer;
    }
};