class Solution {
public:
    int findyesorno(vector<int>&bloomDay,int mid,int k){
        int cnt=0;
        int bouq=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid){
                cnt++;
                if(cnt==k){
                    bouq++;
                    cnt=0;
                }
            }else{
                cnt=0;
            }
        }
        return bouq;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        if ((long long)m * k > bloomDay.size())
    return -1;

        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            //find yes or no
            if(findyesorno(bloomDay,mid,k)>=m){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
    return ans;
    }
};