class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
       map<int, vector<int>> mpp;
       int n=arr.size();   // ordered map

for(int i=0;i<n;i++){
    int cnt = __builtin_popcount(arr[i]);
    mpp[cnt].push_back(arr[i]);
}

vector<int> ans;

for(auto &c : mpp){
    sort(c.second.begin(), c.second.end());
    for(int x : c.second){
        ans.push_back(x);
    }
}
return ans; 
    }
};