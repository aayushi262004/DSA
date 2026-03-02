class Solution {
public:
    string minWindow(string s, string t) {
        if(t.length()>s.length())return"";
        int n=s.size();
        unordered_map<char,int>mpp;
        int start=0;
        int minlen=INT_MAX;
        for(auto c:t){
            mpp[c]++;
        }
        int left=0;
        int required=t.size();
        for(int right=0;right<n;right++){
            if(mpp[s[right]]>0){
               
                required--;
            }
             mpp[s[right]]--;
            while(required==0){
                int len=right-left+1;
                if(minlen>len){
                    minlen=len;
                    start=left;
                }
            mpp[s[left]]++;
            if(mpp[s[left]]>0){
                required++;
            }
            left++;
            }
        }
    return minlen==INT_MAX?"":s.substr(start,minlen);
    }
};