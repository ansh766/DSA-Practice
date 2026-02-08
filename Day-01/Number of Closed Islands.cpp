class Solution {
public:
int row[4] = {0,0,-1,1};
int col[4] = {-1,1,0,0};
void DFS(int i,int j,int n,int m,vector<vector<int>>&grid){
  grid[i][j] = 1;
   for(int k = 0; k<4; k++){
   if(i+row[k]<n&&j+col[k]<m&&i+row[k]>=0&&j+col[k]>=0&&
        !grid[i+row[k]][j+col[k]]){
     DFS(i+row[k],j+col[k],n,m,grid);  
    }
                }
}
    int closedIsland(vector<vector<int>>& grid) {
         int n = grid.size();
         int m = grid[0].size();
        for(int i = 0; i<m; i++){
        if(!grid[0][i])
            DFS(0,i,n,m,grid);
        }

        for(int j= 0; j<n; j++){
            if(!grid[j][0])
        DFS(j,0,n,m,grid);
        }

        for(int j =0; j<m; j++){
            if(!grid[n-1][j])
       DFS(n-1,j,n,m,grid);
        }

        for(int i = 0; i<n; i++){
            if(!grid[i][m-1])
           DFS(i,m-1,n,m,grid);
        }
        int count= 0;
        queue<pair<int,int>>q;
        for(int i = 1; i<n-1; i++){
            for(int j =  1; j<m-1; j++){
              if(!grid[i][j]){
                q.push({i,j});
                 grid[i][j] = 1;
                while(!q.empty()){
                    int i = q.front().first;
                    int j = q.front().second;
                    q.pop();
                   
                for(int k = 0; k<4; k++){
                    if(i+row[k]<n&&j+col[k]<m&&i+row[k]>=0&&j+col[k]>=0&&
                    !grid[i+row[k]][j+col[k]]){
                    grid[i+row[k]][j+col[k]] = 1;
                     q.push({i+row[k],j+col[k]});   
                    }
                }
                }
                count++;
              }
            }
        }
        return count;
    }
};
