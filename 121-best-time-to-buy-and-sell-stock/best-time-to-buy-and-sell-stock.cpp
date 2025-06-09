class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int maxi=0;
        for(int c:prices){
            if(c<mini){
                mini=c;
            }
            else{
                int profit=c-mini;
                maxi=max(maxi,profit);

            }
        }
    return maxi;
    }
};