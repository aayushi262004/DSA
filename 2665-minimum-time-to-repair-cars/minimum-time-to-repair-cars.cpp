class Solution {
    #define ll long long
    bool solve(ll res, vector<int>& ranks, int cars){
        ll cnt=0;
        for(int i=0;i<ranks.size();i++){
            cnt+=sqrt((res*1.0)/ranks[i]);
        }
        return cnt>=cars*1LL;
    }
public:
    long long repairCars(vector<int>& ranks, int cars) {
        ll low= 1;
        ll high=*max_element(ranks.begin(),ranks.end())*1LL*cars*cars;
        ll ans=high;
        while(low<=high){
            ll mid=low+(high-low)/2;
            if(solve(mid,ranks,cars)){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }    
        }
    return ans;
    }
};