class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int ans=0;
        for(int num:nums) {
            if(st.find(num-1)==st.end()) {
                int curr=num;
                int len=1;

                while(st.find(curr+1)!=st.end()) {
                    len++;
                    curr++;
                }
                ans=max(ans,len);
            }
        }
        return ans;
    }
};
