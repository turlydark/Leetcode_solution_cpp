class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty())
            return 0;
        int get = 0;
     
        int i;
        for(i = 0; i < prices.size() - 1; ++i){
            if(prices[i] < prices[i + 1]){
                get = get + (prices[i + 1] - prices[i]);
            
            }
            
        }
        
        return get;
    }
};
//采用贪心算法，只要下一天的价格高于当天价格，则买入
//由于不限制交易次数，算法采用直接相减求利润，即可以理解为，当天买入当天卖出，重复贪心操作即求得最大利润
