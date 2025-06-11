class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mpp;
        for(auto c:strs){
            string curr=c;
            sort(c.begin(),c.end());
            mpp[c].push_back(curr);
        }
        vector<vector<string>>result;
        for(auto &pair:mpp){
            result.push_back(pair.second);
        }
                
    return result;
    }
};