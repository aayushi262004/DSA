class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || s.length() <= numRows) return s;
        int n=s.size();
        vector<vector<char>> vec(numRows, vector<char>(s.length(), '\0'));  
        int j=0;
        int cnt=0;
        while(cnt<n){
        for(int i=0;i<numRows && cnt<n;i++){
            vec[i][j]=s[cnt++];
            
        }
        for(int k=numRows-2;k>=1&& cnt<n;k--){
            j++;
            vec[k][j]=s[cnt++];
            
        }
        j++;
        
    }
      string res = "";
        for (int i = 0; i < numRows; i++) {
            for (int k = 0; k < n; k++) {
                if (vec[i][k] != '\0') {
                    res += vec[i][k];
                }
            }
        }

        return res;
    
}
};