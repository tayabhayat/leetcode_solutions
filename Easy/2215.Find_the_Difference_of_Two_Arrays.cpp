class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> answer1;
        set<int>answer2;
        vector<vector<int>> result;
        bool flag = false;
        for(int i = 0; i < nums1.size(); i++){
            flag = false;
            for(int j = 0; j < nums2.size(); j++){
                if(nums1[i] == nums2[j] && flag == false){
                    flag = true;
                }
               
            }
            if(flag == false)
            answer1.insert(nums1[i]);
        }
        vector<int> ans1(answer1.begin(), answer1.end());
        result.push_back(ans1);
        for(int i = 0; i < nums2.size(); i++){
            flag = false;
            for(int j = 0; j < nums1.size(); j++){
                if(nums2[i] == nums1[j] && flag == false){
                    flag = true;
                }
            }
            if(flag == false)
            answer2.insert(nums2[i]);
        }
        vector<int> ans2(answer2.begin(), answer2.end());
            result.push_back(ans2);
            return result;
    }
};