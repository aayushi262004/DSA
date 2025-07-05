class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>freq;
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        vector<int>res;
        for(auto pair:freq){
            if(pair.first==pair.second){
                res.push_back(pair.first);
            }
        }
         if (res.empty()) return -1;
    return *max_element(res.begin(),res.end());
    }
};