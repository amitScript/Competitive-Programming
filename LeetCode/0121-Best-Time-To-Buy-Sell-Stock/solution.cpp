class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit =0;

        int minprices = prices[0];
        for(int i=1; i<n; i++){
            
         
         minprices =  min(minprices,prices[i]);
           int  currentprofit  = prices[i] - minprices;
          
           profit = max(currentprofit, profit);
           
        
        
           
        }
        return profit;
    } 
};