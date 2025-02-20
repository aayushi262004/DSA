class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int len=nums[0].size();
        int n=pow(2,len);
        unordered_map<int,int>hashTable;
       
        for(int i=0;i<n;i++){
              hashTable[i] = i;
        }
         for(int i=0;i<n;i++){
             string num = bitset<16>(hashTable[i]).to_string().substr(16 - len);
              bool flag=true;
        for(int j=0;j<nums.size();j++){
                 if(num == nums[j]){   
                   flag=false;
                   break;
                 }
            }
            if(flag==true){
                return num;
            }
        }
      return "";
    }
};