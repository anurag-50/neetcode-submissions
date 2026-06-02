class Solution {
public:

bool caneatall(vector<int>&piles,int h,int k) {
    long long hour=0;
    for(int banana:piles) {
        hour+=(banana+k-1)/k;
        if(hour>h){
            return false;
        }
        
    }
    return hour<=h;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int st=1,end=*max_element(piles.begin(),piles.end());
        int ans=0;
        while(st<=end) {
            int mid=st+(end-st)/2;
            if(caneatall(piles,h,mid)) {
                ans=mid;
                end=mid-1;
}else{
    st=mid+1;
}            
        }
        return ans;
    }
};
