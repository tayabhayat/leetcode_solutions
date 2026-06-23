class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merge;
        for(int i = 0; i < nums1.size(); i++){
            merge.push_back(nums1[i]);
        }
        for(int i = 0; i < nums2.size(); i++){
            merge.push_back(nums2[i]);
        }
        sort(merge.begin(), merge.end());
        int size = merge.size() - 1;
        int mid = size / 2;
        if(size %  2 == 0){
            return merge[mid];
        }
        else{
            return (merge[mid] + merge[mid + 1]) / 2.0;
        }
    }
};