class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> st;
        vector<int> subset;

        sort(nums.begin(), nums.end());   // important
        createSubset(nums, 0, st, subset);

        return vector<vector<int>>(st.begin(), st.end());
    }

    void createSubset(vector<int>& nums, int index,
                      set<vector<int>>& st,
                      vector<int>& subset) {

        if (index == nums.size()) {
            st.insert(subset);
            return;
        }

        // take
        subset.push_back(nums[index]);
        createSubset(nums, index + 1, st, subset);
        subset.pop_back();

        // not take
        createSubset(nums, index + 1, st, subset);
    }
};