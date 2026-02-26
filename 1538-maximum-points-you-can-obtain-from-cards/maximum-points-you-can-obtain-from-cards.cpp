class Solution {
public:
    int maxScore(vector<int>& card, int k) {
        int n=card.size();
        int left=0;
        int leftsum=0;
       // int maxsum=0;
        
        for(int left=0;left<k;left++){
            leftsum+=card[left];
        }
        int ans=leftsum;
        int rightidx=n-1;
        int rightsum=0;
        for(int right=k-1;right>=0;right--){
            leftsum-=card[right];
            rightsum+=card[rightidx];
            rightidx--;
        ans=max(ans,rightsum+leftsum);
        }
    return ans;
    }
};