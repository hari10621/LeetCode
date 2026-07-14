class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> graph(n);
        if(n==1){
            return true;
        }
        for(auto &edge : edges)
        {
            int u = edge[0];
            int v = edge[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        vector<int> visited(n,false);
        queue<int> q;
        q.push(source);
        visited[source] = true;

        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(int neighbour : graph[node]){
                if(neighbour == destination){
                    return true;
                }
                if(!visited[neighbour]){
                    visited[neighbour] = true;
                    q.push(neighbour);
                }
            }
        }
        return false;
    }
};