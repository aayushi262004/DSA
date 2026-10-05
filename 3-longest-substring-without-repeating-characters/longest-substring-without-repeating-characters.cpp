class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<char,int>mpp;
        int left = 0;
        int maxi = 0;
        int cnt =0;
        for(int i=0;i<n;i++){
            if(mpp.find(s[i]) == mpp.end()){
                mpp[s[i]]++;
                cnt++;
            }else{
                while(mpp.find(s[i]) != mpp.end()){
                mpp[s[left]]--;
                cnt--;
                if(mpp[s[left]]==0){
                    mpp.erase(s[left]);
                }
                
                left++;
            }
            mpp[s[i]]++;
            cnt++;
          
        }
          maxi = max(maxi, cnt);
        }
    return maxi;
    }
};