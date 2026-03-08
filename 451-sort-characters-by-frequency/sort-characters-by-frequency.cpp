class Solution {
public:
    string frequencySort(string s) {
        int n=s.length();
        unordered_map<char,int>mpp;
        for(int i=0;i<n;i++){
             mpp[s[i]]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto it:mpp){
            char ch=it.first;
            int val=it.second;
            pq.push({val,ch});
        }
        string ans="";
        while(!pq.empty()){
            int freq=pq.top().first;
            char ch1=pq.top().second;
            for(int i=0;i<freq;i++){
                ans+=ch1;
            }
            pq.pop();
        }
    return ans;
    }
};