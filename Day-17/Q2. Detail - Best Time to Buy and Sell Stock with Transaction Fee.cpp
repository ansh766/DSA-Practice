class Solution {
public:
int find(int index,int  n,bool state,int k,
vector<int>&prices,
vector<vector<int>>&dp)
{
    if(index==n){ 
         return 0;
    }
    if(dp[index][state]!=-1){
         return dp[index][state];
    }
    int include = 0,exclude = 0;
    if(!state){
      include = -prices[index]+find(index+1,n,1,k,prices,dp);
      exclude = find(index+1,n,0,k,prices,dp); 
    }
    else{
      include = prices[index]-k+find(index+1,n,0,k,prices,dp);
      exclude = find(index+1,n,1,k,prices,dp); 
    }
    return dp[index][state] = max(include,exclude);
}
    int maxProfit(vector<int>& prices, int fee) {
        int n =prices.size();
        
     vector<int>curr(n+1,0);
     vector<int>next(n+1,0);
      for(int i = n-1; i>=0; i--){
        for(int j= 0; j<=1; j++){
             int include = 0,exclude = 0;
    if(!j){
      include = -prices[i]+next[1];
      exclude = next[0];
    }
    else{
      include = prices[i]-fee+next[0];
      exclude = next[1];
    }
     curr[j] = max(include,exclude);
        }
        next = curr;
      }
        return curr[0];
    }
};
