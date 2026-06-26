class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    
        set<int> s;
        bool flag = false;
        for(int i = 0; i < nums1.size(); i++){
            flag = false;
            for(int j = 0; j < nums2.size(); j++){
                if(nums1[i] == nums2[j] && flag == false){
                    s.insert(nums2[j]);
                    flag = true;
                }
            }
        }
        vector<int> ans(s.begin(), s.end());
        return ans;
    }
};