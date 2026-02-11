class Solution {
public:
    int dominantIndices(vector<int>& nums) {
       int count = 0;
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i<n; i++){
            sum+=nums[i];
        }
        int total = n-1;
        for(int i = 0; i<n-1; i++){
            sum-=nums[i];
           int rem = sum/total;
          if(nums[i]>rem){
              count++;
          }
            total--;
        }
        return count;
    }
};
