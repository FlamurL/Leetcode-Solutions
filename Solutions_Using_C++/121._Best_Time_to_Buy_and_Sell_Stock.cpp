class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int maks=0;
           
    int opt1=0;
    int opt2=1e9;
            for(int i=0;i<prices.size();i++){
                if(opt2>prices[i]){ 
                opt2=1e9;
                opt1=0;
                }
    opt1=max(opt1,prices[i]);
    opt2=min(opt2,prices[i]);
    
    maks=max(maks,opt1-opt2);
            }
            return maks;
        }
    };