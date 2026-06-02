class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0,right=numbers.size()-1;
        while(left<right) {
            int totalnum=numbers[left]+numbers[right];
            if(totalnum==target) {
                return {left+1,right+1};
            }else if(target>totalnum) {
                left++;
            }else{
                right--;
            }
        }
        return {-1,-1};
    }
};
