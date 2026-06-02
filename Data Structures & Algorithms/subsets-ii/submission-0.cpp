class Solution {
public:
void getsubset(vector<int>& nums,vector<vector<int>>&allsubset,vector<int>&ans,int i) {
    if(i==nums.size()) {
        allsubset.push_back(ans);
        return;
    }
    ans.push_back(nums[i]);
    getsubset(nums,allsubset,ans,i+1);
    ans.pop_back();
    int indx=i+1;
    while(indx<nums.size() && nums[indx]==nums[indx-1]) indx++;
    getsubset(nums,allsubset,ans,indx);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>allsubset;
        vector<int>ans;
        getsubset(nums,allsubset,ans,0);
        return allsubset;
    }
};
