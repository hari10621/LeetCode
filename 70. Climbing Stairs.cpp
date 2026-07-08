class Solution {
public:

    int dps(vector<int> &dp,int n){
        if(n <= 2){
            return n;
        }
        if(dp[n] != -1){
            return dp[n];
        }
        return dp[n] = dps(dp,n-1) + dps(dp,n-2);
    }

    int climbStairs(int n) {
       if( n <= 2){
        return n;
       } 
       vector<int> dp(n+1,-1);
       return dps(dp,n);
    }
};