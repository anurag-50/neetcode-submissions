class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for(int num:nums) {
            freq[num]++;
        }
        vector<vector<int>>bucket(nums.size()+1);
        for(auto& [number,count]:freq) {
            bucket[count].push_back(number);
        }
        vector<int>ans;
        for(int i=nums.size();i>0 && ans.size()<k;i--) {
            for(int num:bucket[i]) {
                if(ans.size()<k) {
                    ans.push_back(num);
                }else{
                    break;
                }
            }
        }
        return ans;
    }
};
