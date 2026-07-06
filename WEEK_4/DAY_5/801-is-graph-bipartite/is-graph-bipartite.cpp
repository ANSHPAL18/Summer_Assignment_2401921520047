class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        queue<int> q;
        vector<int> color(graph.size(), -1);
        for (int i = 0; i < graph.size(); i++) {
            if (color[i] == -1) {
                q.push(i);
                color[i] = 0;
                while (!q.empty()) {
                    int node = q.front();
                    q.pop();
                    for (int j = 0; j < graph[node].size(); j++) {
                        if (color[graph[node][j]] == -1) {
                            color[graph[node][j]] = (color[node] + 1) % 2;
                            q.push(graph[node][j]);
                        } else {
                            if (color[node] == color[graph[node][j]])
                                return 0;
                        }
                    }
                }
            }
        }
        return 1;
    }
};