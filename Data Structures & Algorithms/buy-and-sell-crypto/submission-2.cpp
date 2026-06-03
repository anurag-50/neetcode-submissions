class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int currentProfit=0;
        int currentPrice=prices[0];

        for(int i=0;i<prices.size();i++) {
            if(currentPrice<prices[i]) {
                currentProfit=max(currentProfit,prices[i]-currentPrice);
            }else{
                currentPrice=min(currentPrice,prices[i]);
            }
        }
        return currentProfit;
    }
};
