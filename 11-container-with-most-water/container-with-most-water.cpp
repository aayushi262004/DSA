class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int area=0;
        int maxarea=INT_MIN;
        int left=0;
        int right=n-1;
        while(left<right){
            if(height[left]<height[right]){
                 area = height[left]*(right-left);
                 left++;
            }else{
                area=height[right]*(right-left);
                right--;
            }
            maxarea=max(maxarea,area);
        }
    return maxarea;
    }
};