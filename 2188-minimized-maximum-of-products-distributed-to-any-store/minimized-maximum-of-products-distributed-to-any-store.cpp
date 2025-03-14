class Solution {
    #define ll long long 
public:
    int minimizedMaximum(int n, vector<int>& q) {
        ll low=1;
        ll high=*max_element(q.begin(),q.end());
        ll ans=0;
        while(low<high){
            ll mid=low+(high-low)/2;
            ll val=0;
            for(int i=0;i<q.size();i++){
               val+= (q[i]+mid-1)/mid;
            }
            if(val<=n){
                high=mid;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};