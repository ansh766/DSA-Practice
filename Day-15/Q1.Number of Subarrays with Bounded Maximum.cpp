class Solution {
public:
int find(vector<int>&nums,int k){
     int ans = 0;
     int len = 0;
for(int i= 0; i<nums.size(); i++){
    if(nums[i]<=k){
         len++;
    }
    else{
         len = 0;
    }
    ans+=len;
}
return ans;
}
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
       int maxi = find(nums,right); 
       int  mini = find(nums,left-1);
       return maxi-mini; 
    }
};
