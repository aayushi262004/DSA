class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        int n= nums.size();
        unordered_map<int,int>mpp(value);
        for(int it:nums){
            it=(it%value+value)%value;
            mpp[it]++;
        }
        int i=0;
        while(mpp[i%value]>0){
            mpp[i%value]--;
            i++;
        }
    return i;
    }
};