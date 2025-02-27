class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int n=arr.size();
        unordered_set<int>values(arr.begin(),arr.end());
        int maxi=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int pprev=arr[i];
                int prev=arr[j];
                int cnt=2;
                while(values.count(pprev+prev)>0){
                    int sum=pprev+prev;
                    pprev=prev;
                    prev=sum;
                    cnt++;
                } 
            if(cnt>2)
                maxi=max(maxi,cnt);
        }        
     }
        return maxi;
    }
};