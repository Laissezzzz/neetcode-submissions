class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0){
            return 0;
        }else if(prices.size()==1){
            return 0;
        }
        int maxProfit=prices[1]-prices[0];

        for(int i=0;i<prices.size();i++){
            for(int j=i+1;j<prices.size();j++){
                if(prices[j]-prices[i]>maxProfit){
                    maxProfit=prices[j]-prices[i];
                }
            }
        }
        if(maxProfit<0){
            maxProfit=0;
        }
        return maxProfit;
    }
};
