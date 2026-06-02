class Solution {
public:

 void getSubsets(vector<int>& nums,int i,vector<int>&ans,vector<vector<int>>&allSubsets) {
    if(i==nums.size()) {
        allSubsets.push_back(ans);
        return ;
    }
    ans.push_back(nums[i]);
    getSubsets(nums,i+1,ans,allSubsets);

    ans.pop_back();
    int indx=i+1;
    while(indx<nums.size() && nums[indx]==nums[indx-1]) indx++;
    getSubsets(nums,indx,ans,allSubsets);
}



    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        vector<vector<int>>allSubsets;
        getSubsets(nums,0,ans,allSubsets);
        return allSubsets;
    }
};
