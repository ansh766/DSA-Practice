class Solution {
public:
int atmost(vector<int>&nums,int k){
     int first = 0,second = 0;
     int countodd = 0;
     int ans = 0;
     int n = nums.size();
     while(second<n){
        if(nums[second]%2){
             countodd++;
        }
        while(countodd>k&&first<=second){
             if(nums[first]%2){
                 countodd--;
             }
             first++;
        }
        ans+=second-first+1;
        second++;
     }
     return ans;
}
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        return atmost(nums,k)-atmost(nums,k-1);
    }
};
