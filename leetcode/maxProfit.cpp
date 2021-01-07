/* O(N) */

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        
        int max = 0;
                
        if (prices.size() > 0){

            vector <int > max_profit;
            max_profit.resize (prices.size());

            int min = prices[0];

            max_profit[0] = 0;

            for (int i = 1 ; i < prices.size(); i++ ){
            
                max_profit[i] = prices[i] - min;
                
                if (prices[i] < min)
                { 

                    min = prices[i];
                }
                
                if (max_profit[i] > max) max = max_profit[i];
            
            }
            
        }
        return max;          
    }
};



/*
###########################################################
*/

/* O(N2) */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profit = 0;
        int maxProfit = 0;
        
        for (int i = 0 ; i < prices.size(); i++){
            for (int j = i+1; j < prices.size(); j++) {
                
                if (prices[j] - prices[i] > maxProfit)
                {        
                    maxProfit = prices[j] - prices[i];       
                }  
            }
        }
        
        return maxProfit;  
    }
};  