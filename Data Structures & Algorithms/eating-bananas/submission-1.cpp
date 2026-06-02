class Solution {
public:

    bool canEatAll(vector<int>& piles,int h,int k) {
        long long hour=0;
        for(int banana:piles) {
            hour+=(banana+k-1)/k;
             if(hour>h) {
                return false;
            }
           
        }
        return hour<=h;
    }


    int minEatingSpeed(vector<int>& piles, int h) {
        int start=1,end=*max_element(piles.begin(),piles.end());
        int ans=0;
        while(start<=end) {
            int mid=start+(end-start)/2;
            if(canEatAll(piles,h,mid)) {
                ans=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return ans;
    }
};
