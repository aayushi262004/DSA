class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int cnt=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]==' '&& cnt==0)   continue;
            else if(s[i]==' ' && cnt>0)  break;
            else    cnt++;
            }
        
        return cnt;
    }
};