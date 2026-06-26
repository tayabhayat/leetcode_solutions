#include<iostream>
#include<vector>
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = nums.size() - 1;
        int j = 0;
        while(j <= k){
            if(nums[j] == val){
                swap(nums[j], nums[k]);
                k--;
            }
            else{
                j++;
            }
        }
        return k  + 1;
    }
};