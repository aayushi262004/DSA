class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        vector<char> mpp;
        int ans = 0;

        for(int i = 0; i < s.size(); i++) {

            auto it = find(mpp.begin(), mpp.end(), s[i]);

            if(it != mpp.end()) {
                // remove elements up to and including duplicate
                mpp.erase(mpp.begin(), it + 1);
            }

            mpp.push_back(s[i]);
            ans = max(ans, (int)mpp.size());
        }

        return ans;
    }
};