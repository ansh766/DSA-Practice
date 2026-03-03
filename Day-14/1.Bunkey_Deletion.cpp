#include <iostream>
#include<vector>
int user_logic(int N, int K) {
 
     if(K>=N){
         return 0;
     }
int ans[N] = {0};
  int sum = 0;
 while(K--){
     int index = 0;
     while(ans[index]==-1&&index<N){
         index++;
     }
     if(index==N){
         break;
     }
     int num = 3;
     ans[index] = -1;
    
     while(num>0&&index<N){
         if(ans[index]!=-1){
             num--;
         }
         if(num==0){
             ans[index] = -1;
             num = 3;
         }
         index++;
     }
    
 }
 for(int i= 0; i<N; i++){
     if(ans[i]!=-1){
         sum+=(i+1)%998244353;
     }
 }
 return sum;
}

int main() {
    int N, K;
    std::cin >> N >> K;
    int result = user_logic(N, K);
    std::cout << result << std::endl;
    return 0;
}
