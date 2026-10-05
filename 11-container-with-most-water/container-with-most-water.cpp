class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int area =0;
        int max_area = 0;
        while(left<right){
            if(height[left]<height[right]){
                area = height[left]*abs(left-right);
                left++;
            }else{
                area = height[right]*abs(left-right);
                right--;
            }
            max_area = max(max_area, area);
        }
    return max_area;
    }
};