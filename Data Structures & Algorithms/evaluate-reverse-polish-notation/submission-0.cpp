class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>shibu;
        for(string &cbu:tokens) {
            if(cbu=="+" || cbu=="-" || cbu=="*" || cbu=="/") {
                int b=shibu.top();shibu.pop();
                int a=shibu.top();shibu.pop();
                if(cbu=="+") shibu.push(a+b);
                if(cbu=="-") shibu.push(a-b);
                if(cbu=="*") shibu.push(a*b);
                if(cbu=="/") shibu.push(a/b);

            }else{
                shibu.push(stoi(cbu));
            }
        }
        return shibu.top();
    }
};
