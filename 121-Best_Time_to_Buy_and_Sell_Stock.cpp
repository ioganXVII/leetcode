int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int current_min = prices[0];
        
        for(int i = 0; i < prices.size(); i++){
            int price_now = prices[i];
            
            maxProfit = max(maxProfit, price_now - current_min);
            current_min = min(current_min, price_now);
        }
        
        return maxProfit;
    }
