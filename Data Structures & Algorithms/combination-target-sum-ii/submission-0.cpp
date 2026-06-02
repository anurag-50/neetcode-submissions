class Solution {
public:
void getcombinations(vector<int>& candidates,int target,vector<vector<int>>&ans,vector<int>&combi,int start) {
    if(target==0) {
         ans.push_back(combi);
    }
    for(int indx=start;indx<candidates.size();indx++) {
        if(indx>start &&candidates[indx]==candidates[indx-1]) continue;
        if(target<candidates[indx]) break;
        combi.push_back(candidates[indx]);
        getcombinations(candidates,target-candidates[indx],ans,combi,indx+1);
        combi.pop_back();
    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>combi;
        getcombinations(candidates,target,ans,combi,0);
        return ans;

    }
};
