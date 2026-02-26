class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> result;
        if(s.size() < p.size()) return result;

        vector<int> freqP(26,0), freqW(26,0);

        // build p frequency
        for(char c : p)
            freqP[c - 'a']++;

        int left = 0;

        for(int right = 0; right < s.size(); right++){

            // expand window
            freqW[s[right] - 'a']++;

            // shrink if window size > p
            if(right - left + 1 > p.size()){
                freqW[s[left] - 'a']--;
                left++;
            }

            // check when window size == p
            if(right - left + 1 == p.size()){
                if(freqW == freqP)
                    result.push_back(left);
            }
        }

        return result;
    }
};