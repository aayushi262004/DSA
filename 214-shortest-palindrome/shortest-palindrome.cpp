class Solution {
public:
    string shortestPalindrome(string s) {
        int n=s.size();//aacecaaa:8
        string rev=s;//aacecaa
        reverse(rev.begin(),rev.end());
        for(int i=0;i<n;i++){
            if(memcmp(s.c_str()+0,rev.c_str()+i,n-i)==0){//if memcmp ==0 return true matlab string mil gya
                return rev.substr(0,i)+s;
            }//s=abcde rev=edcba
        }//edcba
    return rev+s;
    }
};