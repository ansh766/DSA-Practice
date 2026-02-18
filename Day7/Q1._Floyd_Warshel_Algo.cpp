// User function template for C++

class Solution {
  public:
    void floydWarshall(vector<vector<int>> &dist) {
          int v = dist.size();
    for(int k = 0; k<v; k++){
        for(int i = 0; i<v; i++){
            for(int j = 0; j<v; j++){
                if(i!=k&&k!=j&&dist[i][k]!=1e8&&dist[k][j]!=1e8){
                    dist[i][j] = min(dist[i][j],dist[i][k]+dist[k][j]);
                }
            }
        }
    }
    }
};
