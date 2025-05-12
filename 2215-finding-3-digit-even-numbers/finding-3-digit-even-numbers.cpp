class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
       int n=digits.size();
       set<int>arr;
       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==i) continue;
            for(int k=0;k<n;k++){
                if(k==i || k==j)continue;

            int d1=digits[i];
            int d2=digits[j];
            int d3=digits[k];

            if(d1==0)continue;
            int ans=d1*100+d2*10+d3;
            if(ans%2==0){
                arr.insert(ans);
            }
            }
        }
       }
    vector<int>res(arr.begin(),arr.end());
    return res;

    }
};