class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        int majority=0;
        unordered_map<int,int>freq;
        for(auto c:nums){
            freq[c]++;
            if(freq[c]>majority){
              res=c;
              majority=freq[c];
        }   
     }
    return res;
    }
};