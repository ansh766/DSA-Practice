class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {

        int n = nums.size();

if(n==2){
        if(nums[0]==1){
            return 1;
        }
      }
      if(n<=2){
        return -1;
      }
        vector<long long> prefix(n);
        long long sum = 0;

        for(int i = 0; i < n; i++)
        {
            sum += nums[i];
            prefix[i] = sum;
        }

        vector<long long> suffix(n);
        long long product = 1;

        long long LIMIT = prefix[n-2]; 

        for(int i = n-1; i >= 0; i--)
        {
            if(product > LIMIT / nums[i])
                product = LIMIT + 1;
            else
                product *= nums[i];

            suffix[i] = product;
        }

        for(int i = 1; i < n-1; i++)
        {
            if(prefix[i-1] == suffix[i+1])
                return i;
        }

        return -1;
    }
};
