class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>vec;
        int index=0, n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
                continue;
            }else{
                if(index == i-1){
                    string str = to_string(nums[index]);
                    vec.push_back(str);
                }else{
                    string str= to_string(nums[index]) + "->" + to_string(nums[i-1]);
                    vec.push_back(str);
                }
            index=i;
            }
        }
        if(index<n-1){
            string str= to_string(nums[index]) + "->" + to_string(nums[n-1]);
            vec.push_back(str);
        }else if(index== n-1){
            string str = to_string(nums[n-1]);
            vec.push_back(str);
        }
    return vec;
    }
};