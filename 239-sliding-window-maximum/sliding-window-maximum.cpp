class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        deque<int>deq;
        vector<int>res;
        for(int right =0;right<n;right++){
            while(!deq.empty() && deq.front()<= right-k){
                deq.pop_front();
            }
            while(!deq.empty() && nums[right] >= nums[deq.back()]){
                deq.pop_back();
            }
            deq.push_back(right);
            if(right>=k-1){
                res.push_back(nums[deq.front()]);
            }

        }
    return res;
    }
};