class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        set<int>stt;
        vector<int>index;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==key) index.push_back(i);   
        }
        for(int j=0;j<index.size();j++){
            for(int p=0;p<n;p++){
                if(abs(p-index[j])<=k)
                stt.insert(p);
            }
        }
    return vector<int>(stt.begin(),stt.end());
    }
};