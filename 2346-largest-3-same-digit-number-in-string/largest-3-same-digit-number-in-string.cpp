class Solution {
public:
    string largestGoodInteger(string num) {
        string ans="";
        int n=num.size();
        for(int i=0;i<=n-3;i++){
            if(num[i]==num[i+1] && num[i]==num[i+2]){
                string str=num.substr(i,3);
                if(ans=="" || str>ans){
                    ans=str;
                }
            }
        }
    return ans;
    }
};