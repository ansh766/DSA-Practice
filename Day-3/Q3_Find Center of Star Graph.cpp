class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int E = edges.size();
        vector<int>adj[E+2];
        for(int i = 0; i<E; i++){
             int u = edges[i][0];
             int v = edges[i][1];
             adj[u].push_back(v);
             adj[v].push_back(u);

        }
        for(int i = 0; i<E+2; i++){
             if(adj[i].size()==E){
                 return i;
             }
        }
        return -1;
    }
};
