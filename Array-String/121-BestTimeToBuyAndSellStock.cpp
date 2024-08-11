class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyPointer = 0, sellPointer = 1;
        int maxProfit = 0;

        while (sellPointer < prices.size()){
            if(prices[buyPointer] < prices[sellPointer]){
                int profitBuffer;
                profitBuffer = prices[sellPointer] - prices[buyPointer];

                if(maxProfit < profitBuffer){
                    maxProfit = profitBuffer;
                }
            }else{
                buyPointer = sellPointer;
            }

            sellPointer++;
        }

        return maxProfit;
    }
};