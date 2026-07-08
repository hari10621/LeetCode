class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> result;
        for(int i=0;i<matrix.size();i++){
            int count = 0;
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j] == 1){
                    count++;
                }
            }
            result.push_back(count);
        }
        return result;
    }
};