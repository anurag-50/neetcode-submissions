class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int>seen;
        int left=0,right=0,maxlength=0;
        while(right<s.size()) {
            if(seen.find(s[right])==seen.end()) {
                seen.insert(s[right]);
                maxlength=max(maxlength,right-left+1);
                right++;
            }else{
                seen.erase(s[left]);
                left++;
            }
        }
return maxlength;
    }
};
