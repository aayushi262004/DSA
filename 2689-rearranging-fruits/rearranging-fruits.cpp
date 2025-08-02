class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        unordered_map<int,int>mpp;
        int mini=INT_MAX;
        int n=basket1.size();
        for(int i=0;i<n;i++){
            mpp[basket1[i]]++;
            mini=min(mini,basket1[i]);
            mpp[basket2[i]]--;
             mini=min(mini,basket2[i]);
        }
        vector<int>vec;

        for(auto &pair:mpp){
            if(pair.second%2!=0)return -1;
            for(int i=0;i<abs(pair.second)/2;i++){
                vec.push_back(pair.first);
            }
        }
        sort(vec.begin(),vec.end());
        long long ans=0;
        for(int j=0;j<vec.size()/2;j++){
            ans+=min(2*mini,vec[j]);
        }
    return ans;   
    }
};