class Solution {
public:
    int solve(int ind, vector<vector<int>>& events, int k, int n, vector<vector<int>> &dp)
    {
        int i;
        if(ind >= n || k == 0)
            return 0;
        if(dp[ind][k] != -1)
            return dp[ind][k];
        for(i = ind + 1; i < n; i++)
            if(events[i][0] > events[ind][1])
                break;
        int take = events[ind][2] + solve(i, events, k-1, n, dp);
        int nottake = solve(ind+1, events, k, n, dp);
        
        return dp[ind][k] = max(take, nottake);
    }
    int maxValue(vector<vector<int>>& events, int k) 
    {
        int n = events.size();
        sort(events.begin(), events.end());
        vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
        return solve(0,events,k,n,dp);
    }
};