class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
         vector<long long>ans;
        int n = nums.size();
        ans.push_back(nums[0]);
        for(int i= 1; i<n; i++){
             if(ans[ans.size()-1]!=nums[i]){
                 ans.push_back(nums[i]);
             }
            else{
                long long sum = ans[ans.size()-1]+nums[i];
                 ans.pop_back();
                 ans.push_back(sum);
            while(ans.size()>=2&&ans[ans.size()-1]==ans[ans.size()-2]){
         long long sum = ans[ans.size()-1]+ans[ans.size()-2];
                ans.pop_back();
                ans.pop_back();
             ans.push_back(sum);
       }
            }
        }
        return ans;
    }
};
