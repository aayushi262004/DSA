class Solution {
public:
    int characterReplacement(string s, int k) {
        int i = 0;
        int ans = 0;
        int n = s.length();
        int maxFreq = 0;
        unordered_map<char,int> freq;

        for (int j = 0; j < n; j++) {

            freq[s[j]]++;                     // FIX 1
            maxFreq = max(maxFreq, freq[s[j]]); // track most frequent char

            // If window needs more than k replacements → shrink
            while ((j - i + 1) - maxFreq > k) {   // FIX 2
                freq[s[i]]--;
                i++;
            }

            ans = max(ans, j - i + 1);
        }

        return ans;
    }
};