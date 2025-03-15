class Solution {
public:
    bool canPlaceFlowers(vector<int>& fbed, int n) {
        int m=fbed.size();
        if(n==0) return true;
        for(int i=0;i<m;i++){
            if(fbed[i]==0){
                bool left=(i==0 || fbed[i-1]==0);
                bool right=(i==m-1 || fbed[i+1]==0);
            
            if(left && right){
                fbed[i]=1;
                n--;
                 if(n==0)   return true;
                }
            } 
        }
    return n==0;
    }
};