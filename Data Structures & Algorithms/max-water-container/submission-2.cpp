class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0,right=heights.size()-1;
        int maxWater=0;
        
        while(left<right) {
            int height=min(heights[left],heights[right]);
            int weidgth=right-left;
            int area=height*weidgth;
            maxWater=max(maxWater,area);
            if(heights[left]<heights[right]) {
                left++;
            }else{
                right--;
            }
        }
        return maxWater;
    }
};
