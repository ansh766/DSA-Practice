class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
       vector<int>ans;
       queue<int>q;
       vector<int>Incom(V,0);
       vector<int>adj[V];
       int e = edges.size();
       for(int i= 0; i<e; i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            Incom[v]++;
       }
     for(int i= 0; i<V; i++){
          if(!Incom[i])
          q.push(i);
     }
     while(!q.empty()){
          int node = q.front();
          q.pop();
          ans.push_back(node);
         for(int j= 0; j<adj[node].size(); j++){
              Incom[adj[node][j]]--;
              if(!Incom[adj[node][j]]){
                  q.push(adj[node][j]);
              }
         }
     }
     return ans;
    }
};
