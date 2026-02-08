class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int n = nums.size();
        

       int curr = 0;
         int prev = 1;  
       int ans = 1;
        if(nums[1]-nums[0]==1){
         prev = 2;
         ans = 2;
        }
        for(int i = 2; i<n; i++){
            if(nums[i-1]>=nums[i-2]&&nums[i-1]>=nums[i]&&
           nums[i-1]-nums[i-2]==1&&nums[i]-nums[i-1]==-1){
               curr = prev+1;
            }
           else if(nums[i-1]<=nums[i-2]&&nums[i-1]<=nums[i]&&nums[i-2]-nums[i-1]==1
           &&nums[i-1]-nums[i]==-1){
                curr = prev+1;
            } 
            else{
                if(nums[i]-nums[i-1]==1)
                curr= 2;
                else
                curr = 1;
            }
            ans = max(ans,curr);
            prev = curr;
        }
        
        return (ans!=1) ? ans:-1;

    }
};
