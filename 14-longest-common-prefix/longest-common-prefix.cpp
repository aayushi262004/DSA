class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string ans;
        if(n==0){
            return "";
        }
      for(int i=0;i<strs[0].length();i++){
        char ch=strs[0][i];
        for(int j=1;j<n;j++){
            if( i>=strs[j].length()||ch!=strs[j][i]){
                return ans;
            }
        }
        ans.push_back(ch);
      }
      return strs[0];
    }
};