class Solution {
public:
    void solve(int s,int& n,int k,vector<vector<int>> &ans,vector<int>& tmp){
        if(k==0){
            ans.push_back(tmp);
            return;
        }
        for(int i = s; i <= n; i++){
            tmp.push_back(i);
            solve(i+1,n,k-1,ans,tmp);
            tmp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> tmp;
        solve(1,n,k,ans,tmp);
        return ans;
    }
};