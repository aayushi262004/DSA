class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        int M= 1000000007;
        vector<int>power;
        vector<int>res;
        for(int i=0;i<32;i++){
            if((n & (1<<i)) != 0){
                power.push_back(1<<i);
            }
        }
        for(auto c:queries){
            int start=c[0];
            int end=c[1];
            long long prod=1;
            for(int i=start;i<=end;i++){
                prod=(prod*power[i])%M;
            }
            res.push_back(prod);
        }
    return res;
    }
};