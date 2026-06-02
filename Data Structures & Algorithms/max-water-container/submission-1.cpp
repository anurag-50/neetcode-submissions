class Solution {
public:
    int maxArea(vector<int>& heights) {
        int axn=0;
        int left=0,right=heights.size()-1;
        while(left<right) {
            int weidgth=right-left;
            int height=min(heights[left],heights[right]);
            int curr=weidgth*height;
            axn=max(axn,curr);
            if(heights[left]<heights[right]) {
                left++;
            }else{
                right--;
            }
        }
        return axn;
    }
};
