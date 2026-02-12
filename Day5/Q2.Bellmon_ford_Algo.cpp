// User function Template for C++

class Solution {
  public:
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        vector<int>ans(V,1e8);
        ans[src] = 0;
        
        int e = edges.size();
    for(int i = 0; i<V-1; i++){
         int count = 0;
     for(int j= 0; j<e; j++){
         int u = edges[j][0];
         int v = edges[j][1];
         int w = edges[j][2];
        if(ans[u]!=1e8&&ans[u]+w<ans[v]){
            ans[v] = ans[u]+w;
            count++;
        }
     }
     if(count==0){
          break;
     }
    }
     for(int j= 0; j<e; j++){
         int u = edges[j][0];
         int v = edges[j][1];
         int w = edges[j][2];
        if(ans[u]!=1e8&&ans[u]+w<ans[v]){
            return {-1};
        }
     }
     return ans;
         
    }
};
