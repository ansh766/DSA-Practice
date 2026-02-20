class Solution {
public:
    bool isHappy(int n) {
        
        unordered_map<int,bool>m;
        while(true){
            int  num = n;
            
               long long  sum = 0;
         while(num>0){
             int rem = num%10;
             sum+=rem*rem;
             num/=10;
           
         }
         if(m.count(sum)){
             return 0;
         }
         if(sum==1){
             return 1;
         }
         m[sum] = 1;
         n = sum;
        }
        return 0;

    }
};
