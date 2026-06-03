class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size()-1;
        for(int i=n;i>=0;i--) {
            digits[i]+=1;
            if(digits[i]<10) return digits;
            digits[i]=0;
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};
