class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>pq;
        vector<int>vec;
        for(auto c:nums){
            pq.push(c);
        }
        while(!pq.empty()){
            int val1=0,val2=0;
            val1=pq.top();
            pq.pop();
            val2=pq.top();
            pq.pop();
            vec.push_back(val2);
            vec.push_back(val1);
        }
    return vec;
    }
};