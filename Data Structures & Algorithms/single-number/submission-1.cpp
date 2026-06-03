class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int non=0;
        for(int x:nums) {
           non^=x; 
        }
        return non;
    }
};
