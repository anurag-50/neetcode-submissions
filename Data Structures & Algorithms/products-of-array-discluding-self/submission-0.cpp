class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>putput(nums.size(),1);
        int left=1;
        for(int i=0;i<nums.size();i++) {
            putput[i]*=left;
            left*=nums[i];
        }
        int right=1;
        for(int i=nums.size()-1;i>=0;i--) {
            putput[i]*=right;
            right*=nums[i];
        }
        return putput;
    }
};
