class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        
        vector<int> res;
        res = prices;
        for(int i=0;i<n;i++)
        {
            for(int j= i+1;j<n;j++)
            {
                if(prices[i]>=prices[j]){
                    res[i] = prices[i]-prices[j];
                    break;
                }
            }
        }
        
        return res;
    }
};