class Solution {
    #define ll long long 
public:
    long long putMarbles(vector<int>& weights, int k) {
        int n=weights.size();
        vector<int>ans;
        for(int i=0;i<n-1;i++){
            ans.push_back(weights[i] + weights[i+1]);
        }
        sort(ans.begin(),ans.end());
        ll mini=0;
        ll maxi=0;
        for(int i=0;i<k-1;i++){
            mini+=ans[i];
            maxi+=ans[n-2-i];
        }
    return maxi-mini;
    }
};