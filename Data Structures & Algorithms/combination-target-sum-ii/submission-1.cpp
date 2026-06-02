class Solution {
public:

void getsum(vector<int>& candidates,int target,vector<vector<int>>& ans,vector<int>&combi,int indx) {
    if(target==0) {
        ans.push_back(combi);
    }
    for(int start=indx;start<candidates.size();start++) {
        if(start>indx && candidates[start]==candidates[start-1]) continue;
        if(target<candidates[start]) break;
        combi.push_back(candidates[start]);
        getsum(candidates,target-candidates[start],ans,combi,start+1);
        combi.pop_back();
    }

}


    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>combi;
        getsum(candidates,target,ans,combi,0);
        return ans;
    }
};
