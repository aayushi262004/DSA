class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>vec;
        for(int i=0;i<=n;i++){
            int cnt=0;
            int j=i;
            while(j){
            j=j&(j-1);
            cnt++;
        }
        vec.push_back(cnt);
    }
    return vec;
    }
};