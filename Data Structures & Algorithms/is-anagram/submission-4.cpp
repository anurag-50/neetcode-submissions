class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>storing;
        for(auto first:s) {
            storing[first]++;
        }
        for(auto second:t) {
            if(storing.find(second)==storing.end()) {
                return false;
            }
            storing[second]--;
            if(storing[second]==0) {
                storing.erase(second);
            }
        }
    if(storing.size()==0) {
        return true;
    }
    return false;
    }
};
