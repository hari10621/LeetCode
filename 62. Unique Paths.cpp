class Solution {
public:
    int fate(int i,int j,int m,int n,vector<vector<int>> &dp){
        if(i >= m || j >= n){ 
            return 0; 
        }
        if(i == m-1 && j == n-1){
            return 1;
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        int down = fate(i+1,j,m,n,dp);
        int right = fate(i,j+1,m,n,dp);
        return dp[i][j] = down+right;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, -1)); 
        return fate(0,0,m,n,dp);
    }
};

