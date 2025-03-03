class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
      int n=nums.size();
      int low=0;int high=n-1;
      vector<int>res(n);
      for(int i=0,j=n-1;i<n;i++,j--){
        if(nums[i]<pivot){
            res[low]=nums[i];
            low++;
        }
        if(nums[j]>pivot){
            res[high]=nums[j];
            high--;
        }
      }
      while(low<=high){
        res[low]=pivot;
        low++;
      }
      return res;
    }
};