class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0,bestbuy=prices[0];
        for(int i=1;i<prices.size();i++) {
            if(prices[i]>bestbuy) {
                maxi=max(maxi,prices[i]-bestbuy);
            }
            if(bestbuy>prices[i]) {
                bestbuy=min(bestbuy,prices[i]);
            }
        }
        return maxi;
    }
};
