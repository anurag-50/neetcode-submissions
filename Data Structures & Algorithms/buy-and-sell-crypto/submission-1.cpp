class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int currProfit=0;
        int bestBuy=prices[0];
        for(int i=0;i<prices.size();i++) {
            if(prices[i]>bestBuy) {
                currProfit=max(currProfit,prices[i]-bestBuy);
            }else{
                bestBuy=min(bestBuy,prices[i]);
            }
        }
        return currProfit;
    }
};
