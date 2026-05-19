class Solution {
public:
    int compress(vector<char>& chars) {
        int n= chars.size();
        int i= 0;
        int index =0;
        for(int i=0;i<n;i++){
            int cnt =1;
        while(i<n-1 && chars[i+1]==chars[i]){
            i++;
            cnt++;
        }
        chars[index] = chars[i];
        index++;
        if(cnt>1){
            string str = to_string(cnt);
            for(int i=0;i<str.size();i++){
                chars[index] = str[i];
                index++;
            }
        }
    }
    return index;
    }
};