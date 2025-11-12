class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int>ans(n,-1);
        for(int i=0;i<n;i++){
            int val=nums1[i];
            for(int j=0;j<m;j++){
                if(nums2[j]==val){
                    for(int k=j+1;k<m;k++){
                        if(nums2[k]>val){
                            ans[i]=nums2[k];
                            break;
                        }else{
                            ans[i]=-1;
                        }
                    }
                }
            }
        }
    return ans;
    }
};