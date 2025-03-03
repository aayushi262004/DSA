class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
       vector<int>small;
       vector<int>pivott;
       vector<int>large;
       for(int i=0;i<n;i++){
        if(nums[i]<pivot){
            small.push_back(nums[i]);
        }else if (nums[i]==pivot){
            pivott.push_back(nums[i]);
        }else{
            large.push_back(nums[i]);
        }
       } 
       small.insert(small.end(),pivott.begin(),pivott.end());
       small.insert(small.end(),large.begin(),large.end());
       return small;
    }
};