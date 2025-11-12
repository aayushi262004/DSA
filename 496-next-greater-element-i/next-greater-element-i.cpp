class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> next;  // value in nums2 -> its next greater value
        stack<int> st;                // decreasing stack of values from nums2

        for (int x : nums2) {
            while (!st.empty() && st.top() < x) {
                next[st.top()] = x;
                st.pop();
            }
            st.push(x);
        }
        while (!st.empty()) {  // remaining have no next greater
            next[st.top()] = -1;
            st.pop();
        }

        vector<int> ans;
        ans.reserve(nums1.size());
        for (int v : nums1) ans.push_back(next[v]);
        return ans;
    }
};
