class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, maxLength = 0;
        queue<int> zeroPos;   // stores indices of zeros

        for (int right = 0; right < nums.size(); ++right) {
            if (nums[right] == 0) {
                zeroPos.push(right);
            }

            // If zero count exceeds k, move left to 1+position of earliest zero
            if (zeroPos.size() > k) {
                left = zeroPos.front() + 1;
                zeroPos.pop();
            }

            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};
