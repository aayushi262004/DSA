class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low =1;
        int high = *max_element(piles.begin(),piles.end());
        int ans = INT_MAX;
        while(low<=high){
            int mid = low+(high-low)/2;
        long long hrs =0;
            for(int i=0;i<n;i++){
                int val = ceil((double)piles[i]/mid);
                hrs+=val;
            }
            if(hrs<=h){
                ans = min(ans, mid);
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
    return ans;
    }
};