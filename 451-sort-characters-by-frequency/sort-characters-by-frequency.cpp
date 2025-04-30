class Solution {
public:
    typedef pair<char,int>P;
    struct maxheap_comparator{
        bool operator()(P &p1,P &p2){
            return p1.second<p2.second;
        }
    };
    string frequencySort(string s) {
       
        unordered_map<char,int>mpp;
        for(auto &c:s){
            mpp[c]++;
        }
        priority_queue<P,vector<P>,maxheap_comparator>pq;
        for(auto &it:mpp){
            pq.push({it.first,it.second});
        }
        string result="";
        while(!pq.empty()){
            P temp=pq.top();
            pq.pop();
            result+=string(temp.second,temp.first);
        }
    return result;
    }
};