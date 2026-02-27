class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> mpp1, mpp2;

        for(char c : s1){
            mpp1[c]++;
        }

        int left = 0;
        int k = s1.size();

        for(int right = 0; right < s2.size(); right++){
            mpp2[s2[right]]++;

        
            if(right - left + 1 > k){
                mpp2[s2[left]]--;
                if(mpp2[s2[left]] == 0)
                    mpp2.erase(s2[left]);
                left++;
            }

        
            if(right - left + 1 == k){
                if(mpp1 == mpp2)
                    return true;
            }
        }

        return false;
    }
};