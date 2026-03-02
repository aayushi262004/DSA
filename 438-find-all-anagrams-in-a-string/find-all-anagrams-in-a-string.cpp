class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n1=s.size();
        int n2=p.size();
        unordered_map<char,int>mpp1;
        unordered_map<char,int>mpp2;
        vector<int>ans;
        for(int i=0;i<n2;i++){
            mpp2[p[i]]++;
        }

        int left=0;
        for(int right=0;right<n1;right++){
            mpp1[s[right]]++;
            while(right-left+1>n2){
                mpp1[s[left]]--;
                if(mpp1[s[left]]==0){
                    mpp1.erase(s[left]);
                }
                left++;
            }
            if(mpp1.size()==mpp2.size()){
                if(mpp1==mpp2){
                    ans.push_back(left);
                }
            }
        }
    return ans;
    }
};