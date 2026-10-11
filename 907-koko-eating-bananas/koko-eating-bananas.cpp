class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
       int low = 1;
       int high = *max_element(piles.begin(),piles.end());
       int ans = 1;
       while(low<=high){
        int mid = low + (high-low)/2;
        long long sum =0;
        for(int i=0;i<n;i++){
            sum += (piles[i]+mid-1)/mid;
        }
        if(sum<= h){
            high = mid-1;
            ans = mid;
        }else{
            low = mid+1;
        }
       } 
    return ans;
    }
};