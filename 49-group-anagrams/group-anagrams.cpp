class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        unordered_map<string,vector<string>>mpp;
        for(auto c:strs){
            string curr=c;
            sort(curr.begin(),curr.end());
            mpp[curr].push_back(c);
        }
        vector<vector<string>>res;
        for(auto &pair:mpp){
            res.push_back(pair.second);
        }
    return res;
    }
};