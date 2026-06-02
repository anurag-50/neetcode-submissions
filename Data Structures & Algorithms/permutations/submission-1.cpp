class Solution {
public:

void getPermutation(vector<int>& nums,vector<vector<int>>& ans,int indx) {
    if(indx==nums.size()) {
        ans.push_back({nums});
    }
    for(int j=indx;j<nums.size();j++) {
        swap(nums[indx],nums[j]);
        getPermutation(nums,ans,indx+1);
        swap(nums[indx],nums[j]);
    }
}

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        getPermutation(nums,ans,0);
        return ans;
    }
};
