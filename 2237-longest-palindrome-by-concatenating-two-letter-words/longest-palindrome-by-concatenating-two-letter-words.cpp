class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int>mpp;
        int result=0;
        for(string word:words){

            string reversed_word=word;
            swap(reversed_word[0],reversed_word[1]);

            if(mpp[reversed_word]>0){
                result+=4;
                mpp[reversed_word]--;
            }else{
                mpp[word]++;
            }
        }
    for(auto &pair: mpp){
        string word=pair.first;
        int count = pair.second;
        if(word[0]==word[1] && count>0){
            result+=2;
            break;
        }
    }
return result;
    }
};