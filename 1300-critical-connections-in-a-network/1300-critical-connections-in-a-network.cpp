class Solution {
public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        
           vector<vector<int>> graph(n);
        for (const vector<int>& conn : connections) {
            graph[conn[0]].push_back(conn[1]);
            graph[conn[1]].push_back(conn[0]);
        }

        vector<int> discovery(n, -1);
        vector<int> lowlink(n, -1);
        vector<bool> visited(n, false);
        vector<vector<int>> criticalConnections;

        int time = 0;

        // DFS function using Tarjan's algorithm
        function<void(int, int)> dfs = [&](int node, int parent) {
            visited[node] = true;
            discovery[node] = lowlink[node] = time++;

            for (int neighbor : graph[node]) {
                if (neighbor == parent) continue;

                if (!visited[neighbor]) {
                    dfs(neighbor, node);
                    lowlink[node] = min(lowlink[node], lowlink[neighbor]);

                    if (lowlink[neighbor] > discovery[node]) {
                        criticalConnections.push_back({node, neighbor});
                    }
                } else {
                    lowlink[node] = min(lowlink[node], discovery[neighbor]);
                }
            }
        };

        for (int i = 0; i < n; ++i) {
            if (!visited[i]) {
                dfs(i, -1);
            }
        }

        return criticalConnections;
    }
};