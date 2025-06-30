class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = prices[0] , maxprofit = 0 ;
        for(auto i : prices){
            if(minprice > i)
                minprice = i;
            else if(maxprofit < i - minprice)
                maxprofit = i - minprice;
        }
        return maxprofit;
    }
};