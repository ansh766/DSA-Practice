class Solution {
public:
    int findNthDigit(int n) {
         long long count = 9;
         long long start = 1;
         long long digitlen = 1;
        //mene ye check kr liye kis range me ho 9 180 2700
         while(n>digitlen*count){
           n-=digitlen*count;
           digitlen++;
           count*=10;
           start*=10;  
         }

        start+=(n-1)/digitlen;
   string ans = to_string(start);

   return  ans[(n-1)%digitlen]-'0';



    }
};
