class Solution {
  public:
    int hIndex(vector<int>& citations) {
    int n = citations.size();
    vector<int>freq(n+1,0);
    
    for(int i= 0; i<n; i++){
         if(citations[i]>n){
             freq[n]++;
         }
         else{
             freq[citations[i]]++;
         }
    }
    
  int last = n;
  int num = 0;
   while(n>=0){
         num+=freq[n];
         if(num>=n){
              return n;
         }
         n--;
   }
   return 0;
    
        
    }
};
