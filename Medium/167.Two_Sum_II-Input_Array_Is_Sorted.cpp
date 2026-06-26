class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
             vector <int> ans;
        int n = numbers.size();
        int i = 0; int j = n - 1;
        int pairsum;
        while(i < j){
            pairsum = numbers[i] + numbers[j];
            if(pairsum < target) i++;
            if(pairsum > target) j--;
            if(pairsum == target){
                ans.push_back(i+1); ans.push_back(j+1); break;
            }
        }
        return ans;
    }
};