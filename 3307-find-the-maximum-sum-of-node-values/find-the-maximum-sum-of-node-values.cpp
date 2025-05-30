class Solution {
public:
    typedef long long ll;
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        ll sum=0;
        int min_nuksaan=INT_MAX;
        int count=0;
        for(ll num: nums){
            if((num^k) >num){
                count++;
                sum+=(num^k);
            }else{
                sum+=num;
            }
        min_nuksaan=min((long long)min_nuksaan,abs(num-(num^k)));
        }
        if(count%2==0){
            return sum;
        } 
        return (sum-min_nuksaan);
    }
};