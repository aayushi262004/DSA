class Solution {
public:
    void partition(vector<int> &nums, int low, int high){
        if(low<high){
            int mid=(low+high)/2;
            partition(nums,low,mid);
            partition(nums,mid+1,high);
            mergeSort(nums,low,mid,high);
        }
    }
    void mergeSort(vector<int>&nums,int low, int mid, int high){
       int i=low;
       int j=mid+1;
       vector<int>temp;
       while(i<=mid && j<=high){
        if(nums[i]<nums[j]){
            temp.push_back(nums[i]);
            i++;
        }else{
            temp.push_back(nums[j]);
            j++;
        }
       }
        while(i<=mid){
            temp.push_back(nums[i]);
            i++;
        }
        while(j<=high){
            temp.push_back(nums[j]);
            j++;
        }
        for(int k=0;k<temp.size();k++){
            nums[low+k]=temp[k];
        }
       } 
    
     
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       for(int i=0;i<n;i++){
            nums1[m+i]=nums2[i];
       }
       partition(nums1,0,m+n-1);
      
    }
};