class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
      long long  start = 0,end = 0;
      int n = piles.size();
      for(int i= 0; i<n; i++){
          start+=piles[i];
          if(end<piles[i]){
             end = piles[i];
          }
      }
       start/=h;
     if(start==0){
         start = 1;
     }
     int ans = 0;
     while(start<=end){
         int mid = start+(end-start)/2;
         long long  count = 0;
       for(int i = 0; i<n; i++){
          count+=piles[i]/mid;
          if(piles[i]%mid){
             count++;
          }
       }
       if(count<=h){
         ans = mid;
         end = mid-1;
       }
       else{
         start = mid+1;
       }
     }
     return ans;
       
    }
};
