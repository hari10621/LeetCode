class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        result.push_back({1});
        for(int i=1;i<numRows;i++){
            vector<int> curr(i+1,1);
            if(i > 1){
                for(int j=1;j<curr.size()-1;j++){
                    curr[j] = result[i-1][j-1] + result[i-1][j];
                }
            }
            result.push_back(curr);
        }
        return result;
    }

};