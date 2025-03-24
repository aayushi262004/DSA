class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        int n=meetings.size();
        sort(meetings.begin(),meetings.end());

        int res=meetings[0][0]-1;
        int end=meetings[0][1];

        for(int i=1;i<n;i++){
            int start=meetings[i][0];
            if(start>end)
                res+=start-end-1; 
        end=max(end,meetings[i][1]);
        }
        res+=days-end;
        return res;
    }
};