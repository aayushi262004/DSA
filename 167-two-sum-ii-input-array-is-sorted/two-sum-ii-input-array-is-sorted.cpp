class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int left=0;
        int right=n-1;
        while(left<right){
            int diff=target-numbers[left];
            if(diff==numbers[right]) return {left+1,right+1};
            else if(diff>numbers[right]) left++;
            else right--;
        }
        return {};
    }
};