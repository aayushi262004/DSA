class Solution {
    #define ll long long
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int n=candies.size();
        ll high=*max_element(candies.begin(),candies.end());
        ll low=1;
        ll ans=0;
       
        
        while(low<=high){
            ll val=0;
            ll mid=low+ (high-low)/2;
            for(int i=0;i<n;i++)  val+= candies[i]/mid;
           if(val>=k){
            ans=mid;
            low=mid+1;
           }else if(k>val)  high=mid-1;
        }  
    return ans;
    }
};