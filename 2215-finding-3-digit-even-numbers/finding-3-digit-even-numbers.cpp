class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int>res;
        vector<int>mpp(10,0);
        for(int c:digits){
            mpp[c]++;
        }
        for(int i=1;i<=9;i++){
            if(mpp[i]==0) continue;
            mpp[i]--;
            for(int j=0;j<=9;j++){
                if(mpp[j]==0)continue;
                mpp[j]--;
                for(int k=0;k<=8;k+=2){
                    if(mpp[k]==0)continue;
                    mpp[k]--;
                    int num= i*100 + j*10 + k;
                    res.push_back(num);
                    mpp[k]++;
                }
            mpp[j]++;
            }
        mpp[i]++;
        }
    return res;
    }
};