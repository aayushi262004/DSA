class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        unordered_map<char,int>mpp;
        int left =0;
        int res =0;
        int maxfreq = 0;
        for(int right =0;right<n;right++){
            mpp[s[right]]++;
            maxfreq = max(maxfreq, mpp[s[right]]);
            while((right-left+1)-maxfreq >k){
                mpp[s[left]]--;
                left++;

            }
            res = max(res, right-left+1);
        }
    return res;
    }
};