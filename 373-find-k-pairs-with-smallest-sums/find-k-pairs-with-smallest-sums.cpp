class Solution {
public:
    typedef pair<int,pair<int,int>> P;

    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int n=nums1.size();
        int m=nums2.size();
        priority_queue<P,vector<P>>pq;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               int sum=nums1[i]+nums2[j];
                if(pq.size()<k){
                    pq.push({sum,{i,j}});
                }
                    else if(sum<pq.top().first){
                        pq.pop();
                        pq.push({sum,{i,j}});
                    }else{
                        break;
                    }  
            }
        }
    vector<vector<int>>vec;
    while(!pq.empty()){
        auto temp=pq.top();
        pq.pop();
        int i=temp.second.first;
        int j=temp.second.second;
        vec.push_back({nums1[i],nums2[j]});
    }
    return vec;
    }
};