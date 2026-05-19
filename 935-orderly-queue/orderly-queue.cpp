class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(k>1){
            sort(s.begin(),s.end());
            return s;
        }

        string res = s;
        int n = s.length();
        for(int l = 1;l<= n-1; l++){
            string temp = s.substr(l) + s.substr(0,l);
            res = min(res,temp);
        }
    return res;
    }
};