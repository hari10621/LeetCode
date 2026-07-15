class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int> mp;
        int maxi = 0;
        int result;
        for(int i=0;i<edges.size();i++){
            for(int j=0;j<edges[i].size();j++){
                mp[edges[i][j]]++;
                if(mp[edges[i][j]] > maxi){
                    maxi = mp[edges[i][j]];
                    result = edges[i][j];
                }
            }
        }
        return result;
    }
};

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        if(edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1]){
            return edges[0][0];
        }
        else{
            return edges[0][1];
        }
    }
};