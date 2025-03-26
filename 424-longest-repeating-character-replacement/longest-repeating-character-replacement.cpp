class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0;
        int right=0;
        int maxlen=0;
        int maxfreq=0;
        unordered_map<char,int>mpp{};
        while(right<s.size()){
            mpp[s[right]-'A']++;
            maxfreq=max(maxfreq,mpp[s[right]-'A']);
            while((right-left+1)-maxfreq>k){
               maxfreq=0;
               mpp[s[left]-'A']--;
               for(int i=0;i<26;i++) 
               maxfreq=max(maxfreq,mpp[i]);
                left++;
            }
            if((right-left+1)-maxfreq<=k){
                maxlen=max(maxlen,right-left+1);
                right++;
            }
        }
        return maxlen;
    }
};