class Solution {
public:
void find(int n,vector<bool>visited,int&count,
int&index){
    if(index==n){
         count++;
    }
  for(int i= 1; i<=n; i++){
    if(!visited[i]&&((index==0||i%(index+1)==0||(index+1)%i==0))){
        visited[i] = 1;
        index++;
        find(n,visited,count,index);
        visited[i] = 0;
        index--;
    }
  }
}
    int countArrangement(int n) {
    int index = 0;
    vector<bool>visited(n+1,0);
    int count=0; 
    find(n,visited,count,index);
    return count;
    }

};
