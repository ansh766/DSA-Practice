class Solution {
public:
int slidingwindow(vector<int>&nums,int k){
     int i= 0;
     int j = 1;
     int count = 0;
     int n = nums.size();
     while(j<n){
         while(nums[j]-nums[i]>k){
             i++;
         }
         count+=(j-i);
         j++;
     }
     return count;
}
    int smallestDistancePair(vector<int>& nums, int k) {
     sort(nums.begin(),nums.end());
     int n = nums.size();
     int start = 0;
     int end = nums[n-1]-nums[0];
     int ans = 0;
     while(start<=end){
         int mid = start+(end-start)/2;
        int countpair = slidingwindow(nums,mid);
        if(countpair<k){
            start = mid+1; 
        }
        else{
           ans = mid;
           end = mid-1;
        }
     }
     return ans;   
    }
};
