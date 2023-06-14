class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0 ; 
       int temp=prices[0]; 
        for (int i = 1; i < prices.size(); i ++)
        {
        profit = max(profit,prices[i]-temp ); 
                
            temp = min(temp,prices[i]);
        }
        return profit; 
    }
};