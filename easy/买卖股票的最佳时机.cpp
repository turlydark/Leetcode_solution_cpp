class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty())
            return 0;
        
        long long  minn = 1e7;
        int maxn = -1e7;
        for(int i = 0; i < prices.size(); ++i){
            if(prices[i] < minn)
                minn = prices[i];
            if(prices[i] - minn > maxn)
                maxn = prices[i] -minn;
        }
        return maxn;
    }
};

//根据题目描述，只能完成一笔交易且令利润最大化，则卖出价格需高于买入价格
//遍历整个数组，得到符合条件的买入时间先与卖出时间，且两者相差最大（利润最大）的两点
