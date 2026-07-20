class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<vector<int>> result(grid.size(),vector<int>(grid[0].size(),0));
        int m = grid.size();
        int n = grid[0].size();
         k = k % (m * n); 
         result = grid;
        for(int iterater = 0;iterater < k;iterater++){
        vector<vector<int>> current_state = grid; 
        for(int i = 0; i < m; i++){ 
                for(int j = 0; j < n; j++){ 
                    
                    
                    if(i == m-1 && j == n-1){ 
                        result[0][0] = current_state[i][j]; 
                    } 
                    else if(j == n-1 && i != m-1){ 
                        result[i+1][0] = current_state[i][j]; 
                    } 
                    else{ 
                        
                        result[i][j+1] = current_state[i][j]; 
                    } 
                } 
            }
        grid = result;
        }
        return result;
    }
};