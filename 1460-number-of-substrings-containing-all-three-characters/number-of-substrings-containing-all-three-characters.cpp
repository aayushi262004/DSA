class Solution {
public:
    int numberOfSubstrings(string s) {
       int n=s.size();
       int left=0;
       int right=0;
       int total=0;
       unordered_map<char,int>mpp;
        while(right<n){
            char curr=s[right];
            mpp[curr]++;
            while(mpp.size()==3){
                total+=n-right;
                mpp[s[left]]--;
                if(mpp[s[left]]==0) mpp.erase(s[left]);
                left++;
            }
        right++;
        }
    return total;
    }
};