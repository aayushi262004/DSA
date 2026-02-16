class Solution {
public:
    string frequencySort(string s) {
        int n=s.size();
        unordered_map<char,int>mpp;
        priority_queue<pair<int,char>>pq;
        for(int i=0;i<n;i++){
            mpp[s[i]]++;
        }
        for(auto c:mpp){
            pq.push({c.second, c.first});
        }
        string res="";
        while(!pq.empty()){
            int freq=pq.top().first;
            char ch=pq.top().second;
            while(freq){
                res+=ch;
                freq--;
            }
            pq.pop();
        }
    return res;    
    }
};