class Solution {
public:
    int M=1e9+7;
    int lengthAfterTransformations(string s, int t) {
        //unordered_map<char,int>mpp;
        vector<int>mpp(26,0);
        for(auto &c: s){
            mpp[c-'a']++;
        }
        while(t!=0){
            //unordered_map<char,int>temp;
            vector<int>temp(26,0);
            for(int i=0;i<26;i++){
                char ch=i+'a';
                int val=mpp[i];
                if(ch!='z'){
                    temp[(ch+1)-'a']= (temp[(ch+1)-'a']+val)%M;
                }
                else{
                    temp['a'-'a']=(temp['a'-'a']+val)%M;
                    temp['b'-'a']=(temp['b'-'a']+val)%M;

                }
            }
        t--;
        mpp=move(temp);
        }
    int result=0;
    for(int i=0;i<26;i++){
        result=(result+mpp[i]) %M;
    }
    return result;
    }
};