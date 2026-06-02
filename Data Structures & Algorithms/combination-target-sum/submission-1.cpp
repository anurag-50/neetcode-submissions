class Solution {
public:

set<vector<int>>s;

void getcombinations(vector<int>& nums,int target,int indx,vector<vector<int>>& ans,vector<int>&combinations) {
    if(indx==nums.size() || target<0) {
        return;
    }
    if(target==0) {
        if(s.find(combinations)==s.end()) {
            ans.push_back(combinations);
            s.insert(combinations);
        }
        return;
    }
    combinations.push_back(nums[indx]);
    getcombinations(nums,target-nums[indx],indx+1,ans,combinations);
    getcombinations(nums,target-nums[indx],indx,ans,combinations);

    combinations.pop_back();
    getcombinations(nums,target,indx+1,ans,combinations);
}


    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>combinations;
        getcombinations(nums,target,0,ans,combinations);
        return ans;
    }
};
