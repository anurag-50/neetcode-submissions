class Solution {
public:
set<vector<int>>s;
void getcombinations(vector<int>& nums,int target,int indx,vector<vector<int>>&ans,vector<int>combination) {
    if(indx==nums.size() || target<0) {
        return;
    }
    if(target==0) {
        if(s.find(combination)==s.end()) {
            ans.push_back(combination);
            s.insert(combination);
        }
        return ;
    }
    combination.push_back(nums[indx]);
    getcombinations(nums,target-nums[indx],indx+1,ans,combination);
    getcombinations(nums,target-nums[indx],indx,ans,combination);
    combination.pop_back();
    getcombinations(nums,target,indx+1,ans,combination);
}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>combination;
        getcombinations(nums,target,0,ans,combination);
        return ans;
    }
};
