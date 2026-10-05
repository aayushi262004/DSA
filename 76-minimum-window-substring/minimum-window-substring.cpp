class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length();
        int m = t.length();
        if(m>n)return "";
        int left_idx =-1;
        int right_idx =-1;
        string str = "";
        int mini = INT_MAX;
        int reqdCnt = m;
        int left =0;
        unordered_map<char,int>mpp;
        for(int i=0;i<m;i++){
            mpp[t[i]]++;
            }
        for(int j =0;j<n;j++){

            if(mpp[s[j]]>0){
                reqdCnt--;
            }
            mpp[s[j]]--;
        
               
            
            while(reqdCnt==0){
                 int len = j-left+1;
                if(mini >len){
                    mini = len;
                    left_idx = left;
                    right_idx = j;
                }
                mpp[s[left]]++;
                if(mpp[s[left]]>0){
                    reqdCnt++;
                }
                left++;
            }

            }
        
    if(left_idx != -1 && right_idx != -1)
         str = s.substr(left_idx, right_idx- left_idx+1);
    return str;
    }
};