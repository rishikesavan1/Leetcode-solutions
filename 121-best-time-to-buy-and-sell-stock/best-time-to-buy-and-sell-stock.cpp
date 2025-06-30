class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = INT_MAX , maxprofit = 0 ;
        for(auto i : prices){
            if(minprice > i)
                minprice = i;
            else if(maxprofit < i - minprice)
                maxprofit = i - minprice;
        }
        return maxprofit;
    }
};