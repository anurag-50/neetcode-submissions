class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>anagram;
        
        for(string ch:strs) {
            string key=ch;
            sort(key.begin(),key.end());
            anagram[key].push_back(ch);
        }
        vector<vector<string>>ans;
        for(auto& it:anagram) {
            ans.push_back(it.second);
        }
        return ans;
    }
};
