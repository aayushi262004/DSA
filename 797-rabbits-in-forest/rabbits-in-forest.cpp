class Solution {
public:
    int numRabbits(vector<int>& answers) {
        int n=answers.size();
        unordered_map<int,int>mpp;
        for(int c:answers){
            mpp[c]++;
        }
        int total=0;
        for(auto &pair:mpp){
            int x = pair.first;
            int count=pair.second;
            int group=ceil((double)count/(x+1));

             total+=group*(x+1);
        }
    return total;
    }
};