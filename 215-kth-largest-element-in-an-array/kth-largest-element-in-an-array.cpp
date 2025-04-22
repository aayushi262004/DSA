class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(int c:nums){
            pq.push(c);
        }
        int x=0;
        while(k){
            x=pq.top();
            pq.pop();
            k--;
        }
        return x;
    }
};