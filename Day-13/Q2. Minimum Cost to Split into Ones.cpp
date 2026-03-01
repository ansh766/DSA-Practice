class Solution {
public:
    int minCost(int n) {
        int sum = 0;
      for(int i = n-1; i>=0; i--){
          sum+=i;
      }  
        return sum;
    }
};
