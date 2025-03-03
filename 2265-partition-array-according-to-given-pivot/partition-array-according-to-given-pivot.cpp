//approach-2
//TC:O(n)+O(n)=O(n);
//SC:O(n);
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


//approach-1
// TC:O(n+n)=O(n);
//SC:O(n);
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
