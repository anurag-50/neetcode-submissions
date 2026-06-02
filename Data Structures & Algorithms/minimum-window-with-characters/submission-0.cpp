class Solution {
public:
    string minWindow(string s, string t) {
        if(s.empty() || t.empty() ||s.size()<t.size()) return "";
        vector<int>map(128,0);
        int count=t.length();
        int st=0,end=0,minLen=INT_MAX,startindx=0;
        for(char c :t) {
            map[c]++;
        }
        while(end<s.length()) {
            if(map[s[end++]]-- >0) {
                count--;
            }
            while(count==0) {
                if(end-st<minLen) {
                    startindx=st;
                    minLen=end-st;
                }
                if(map[s[st++]]++ ==0) {
                    count++;
                }
            }
        }
        return minLen==INT_MAX?"":s.substr(startindx,minLen);
    }
};
