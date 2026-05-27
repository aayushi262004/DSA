class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int left = 0;
        int maxlen = INT_MIN;
        int maxi =INT_MIN;
        unordered_map<char,int>mpp;
        for(int right =0;right<n;right++){
            mpp[s[right]]++;
            maxlen = max(maxlen, mpp[s[right]]);
            if(right-left+1 -maxlen >k){
                mpp[s[left]]--;
                if(mpp[s[left]] == 0){
                    mpp.erase(s[left]);
                }
                left++;
            }
        maxi = max(maxi,right-left+1);
        }
        return maxi;
            }
};