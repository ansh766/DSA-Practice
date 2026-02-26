class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
      int start = 0;
      int n = nums.size();
      if(n==1){
           return nums[0];
      }
      int end = n-1;

      while(start<=end){
         int mid = start+(end-start)/2;
         if(mid==0||mid==n-1){
            if(mid==0){
                 if(nums[mid]!=nums[mid+1]){
                     return nums[mid];
                 }
                 else{
                     start = mid+1;
                 }
            }
            else{
                 if(nums[mid]!=nums[mid-1]){
                     return nums[mid];
                 }
                 else{
                      end = mid-1;
            }
         }
         }
         if(nums[mid]!=nums[mid-1]&&nums[mid]!=nums[mid+1]){
             return nums[mid];
         }
         else if(mid%2==0&&nums[mid]==nums[mid+1]){
              start = mid+1;
         }
         else if(mid%2==0&&nums[mid]==nums[mid-1]){
             end = mid-1;
         }
         else if(mid%2!=0&&nums[mid]==nums[mid-1]){
             start = mid+1;
         }
         else{
             end = mid-1;
         }
      }
      return 0;   
    }
};
