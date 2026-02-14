class Solution {
public:
    long long find_sum(vector<int>piles,int &mid){
        long long cnt=0;
        for(int i=0;i<piles.size();i++){
             cnt+=(1LL*piles[i]+mid-1)/mid;
        }
        return cnt;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        if(n>h)return -1;
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(find_sum(piles,mid)>h){
                low=mid+1;
            }else{
                high=mid-1;
                ans=mid;
            }
        }
    return ans;
    }
};