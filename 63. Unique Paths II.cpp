class Solution {
public:
    int fate2(int i,int j,int m,int n,vector<vector<int>>&dp,vector<vector<int>>& obstacleGrid){
        if(i>=m || j >= n){
            return 0;
        }
        if(obstacleGrid[i][j] == 1)
            return 0;
        if(i == m-1 && j == n-1){
            return 1;
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
       
            int down = fate2(i+1,j,m,n,dp,obstacleGrid);
            int right = fate2(i,j+1,m,n,dp,obstacleGrid);
            return dp[i][j] = down+right;
        
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if(obstacleGrid[obstacleGrid.size()-1][obstacleGrid[0].size()-1] == 1){
            return 0;
        }
        vector<vector<int>> dp(obstacleGrid.size(),vector<int>(obstacleGrid[0].size(),-1));
        return fate2(0,0,obstacleGrid.size(),obstacleGrid[0].size(),dp,obstacleGrid);
    }
};