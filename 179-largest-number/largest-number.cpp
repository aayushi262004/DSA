class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int n=nums.size();
        vector<string>str;
        for(auto c:nums){
            str.push_back(to_string(c));
        }
        sort(str.begin(),str.end(),[](const string &a,const string &b){
            return (a+b)>(b+a);
    });
        if (str[0]=="0")    return "0";
        string ans;
        for(auto stri:str){
            ans+=stri;
        }
        return ans;
    }
};