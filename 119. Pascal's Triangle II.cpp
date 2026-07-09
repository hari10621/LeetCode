class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex == 0){
            return {1};
        }
        if(rowIndex == 1){
            return {1,1};
        }
        vector<vector<int>> dp;
        dp.push_back({1});
        for(int i=1;i<=rowIndex;i++){
            vector<int> curr(i+1,1);
            if(i>1){
                for(int j = 1;j<i;j++){
                    curr[j] = dp[i-1][j-1] + dp[i-1][j];
                }
            }
            dp.push_back(curr);
            if(i == rowIndex){
                return curr;
            }
        }
        return {};
    }
};