class Solution {
public:
    int findMin(vector<int>& arr) {
          // Initialize low and high pointers
        int low = 0;
        int high = arr.size() - 1;
        int ans = INT_MAX;
        // Loop until low meets high
        while (low <= high) {
            // Find mid index
            int mid = low + (high - low) / 2;

            // If mid element is greater than element at high,
            // smallest element lies to the right of mid
            if (arr[mid] >=arr[low]) {
                ans= min(ans, arr[low]);
                low = mid+1;
            } else {
                // Else smallest element is at mid or to the left
                ans = min(ans, arr[mid]);
                high = mid-1;
            }
        }

        // When low == high, we found the smallest element
        return ans;
        
    }
};