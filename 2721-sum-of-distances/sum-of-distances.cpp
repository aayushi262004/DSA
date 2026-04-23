class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        unordered_map<int, vector<int>> mpp;
        int n = nums.size();

        // store indices
        for(int i = 0; i < n; i++) {
            mpp[nums[i]].push_back(i);
        }

        vector<long long> res(n);

        // process each group
        for(auto &it : mpp) {
            auto &vec = it.second;
            int sz = vec.size();

            // prefix sum
            vector<long long> prefix(sz);
            prefix[0] = vec[0];
            for(int i = 1; i < sz; i++) {
                prefix[i] = prefix[i-1] + vec[i];
            }

            for(int i = 0; i < sz; i++) {
                long long idx = vec[i];

                // left contribution
                long long left = idx * i - (i > 0 ? prefix[i-1] : 0);

                // right contribution
                long long right = (prefix[sz-1] - prefix[i]) - idx * (sz - i - 1);

                res[idx] = left + right;
            }
        }

        return res;
    }
};