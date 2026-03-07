class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n=hand.size();
        if(n%groupSize!=0)return false;
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[hand[i]]++;
        }
        while(!mpp.empty()){
            int val=mpp.begin()->first;
            for(int i=0;i<groupSize;i++){
                if(mpp[val+i]==0){
                    return false;
                }
                mpp[val+i]--;
                if(mpp[val+i]<1){
                    mpp.erase(val+i);
                }
            }
        }
    return true;
    }
};