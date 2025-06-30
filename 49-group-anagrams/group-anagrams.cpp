class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>vec;
        for(auto c:strs){
            string curr=c;
            sort(c.begin(),c.end());
            vec[c].push_back(curr);
        }
        vector<vector<string>>res;
        for(auto &pair: vec){
            res.push_back(pair.second);
        }
    return res;
    }
};