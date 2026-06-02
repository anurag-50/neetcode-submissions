class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        addingParantheses(ans,n,0,"");
        return ans;
    }
    void addingParantheses(vector<string>& ans,int n,int m,string str) {
        if(n==0 && m==0) {
            ans.push_back(str);
        }
        if(m>0) addingParantheses(ans,n,m-1,str+')');
        if(n>0) addingParantheses(ans,n-1,m+1,str+'(');
    }
};
