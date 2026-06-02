class Solution {
public:

bool partitonop(string s) {
string s2=s;
reverse(s2.begin(),s2.end());
return s==s2;;
}

void getpartition(string s,vector<vector<string>>&ans,vector<string>spartiton) {
    if(s.size()==0) {
        ans.push_back(spartiton);
        return ;
    }
    for(int i=0;i<s.size();i++) {
        string part=s.substr(0,i+1);
        if(partitonop(part)){
            spartiton.push_back(part);
            getpartition(s.substr(i+1),ans,spartiton);
            spartiton.pop_back();
        }
    }
}

    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>spartiton;
        getpartition(s,ans,spartiton);
        return ans;
    }
};
