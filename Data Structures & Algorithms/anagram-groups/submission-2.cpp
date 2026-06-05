class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>storing;
        for(auto ch:strs) {
            string key=ch;
            sort(key.begin(),key.end());
            storing[key].push_back(ch);
        }
        vector<vector<string>>ans;
        for(auto& it:storing) {
            ans.push_back(it.second);
        }
        return ans;
    }
};
