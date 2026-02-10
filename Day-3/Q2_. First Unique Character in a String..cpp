class Solution {
public:
    int firstUniqChar(string s) {
       vector<int>lower(26,0);
       int n= s.size();
       for(int i=  0; i<n; i++){
         lower[s[i]-'a']++;
       } 
       for(int i = 0; i<n; i++){
         if(lower[s[i]-'a']==1){
             return i;
         }
       }
       return -1;
    }
};
