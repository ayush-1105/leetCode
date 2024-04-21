class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int, vector<int>> graph;
        
        for (auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        
        queue<int> queue;
        unordered_set<int> visited;
        
        queue.push(source);
        visited.insert(source);
        
        while (!queue.empty()) {
            int node = queue.front();
            queue.pop();
            if (node == destination) {
                return true;
            }
            for (int neighbor : graph[node]) {
                if (visited.find(neighbor) == visited.end()) {
                    visited.insert(neighbor);
                    queue.push(neighbor);
                }
            }
        }
        
        return false;
    }
};