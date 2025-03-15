class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
         int area=0;
        while(left<right){
            int width=right-left;
           
            int mini=0;
            if(height[left]<=height[right]){
                  mini=height[left];
                  left++;
        }else{
            mini=height[right];
            right--;
        }
        area=max(area,width*mini);
        }
        return area;
    }
};