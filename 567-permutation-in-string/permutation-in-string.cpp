class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m =  s2.length();
        int left = 0;
        unordered_map<char,int>mpp1;
        unordered_map<char,int>mpp2;
        for(int  i =0;i<n;i++){
            mpp1[s1[i]]++;
        }
        for(int right =0;right<m;right++){
            mpp2[s2[right]]++;
            while(right-left+1==n){
                if(mpp1 == mpp2){
                    return true;
                }else{
                    mpp2[s2[left]]--;
                    if(mpp2[s2[left]] == 0){
                        mpp2.erase(s2[left]);
                    }
                    left++;
                }
            }
        }
    return false;
    }
};