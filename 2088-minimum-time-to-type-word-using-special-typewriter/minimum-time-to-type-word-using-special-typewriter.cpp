class Solution {
public:
    int minTimeToType(string word) {
        int n=word.size();
       int ans=0;
       char curr='a';
       for(auto c:word){
        int clockwise=abs(c-curr);
        int cclockwise=26-clockwise;
        ans+=min(clockwise,cclockwise)+1;
        curr=c;
       }
       return ans;
    }
};