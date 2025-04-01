class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size();
        int cnt1=0,cnt2=0;
        for(int i=0;i<n/2;i++){
            if(tolower(s[i])=='a'||tolower(s[i])=='e'||tolower(s[i])=='i'||tolower(s        [i])         =='o'||tolower(s[i])=='u') cnt1++;
        }
     for(int i=n/2;i<n;i++){
            if(tolower(s[i])=='a'||tolower(s[i])=='e'||tolower(s[i])=='i'||tolower(s[i])=='o'||tolower(s[i])=='u') cnt2++;
        }
    return cnt1==cnt2;
    }
};