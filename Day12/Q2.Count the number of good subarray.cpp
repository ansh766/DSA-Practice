class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        int n = nums.size();
        long long count = 0;
        long long ans = 0;
        int first = 0,second = 0;
        unordered_map<int,int>m;
        while(second<n)
         {
             count+=m[nums[second]];
             m[nums[second]]++;
            while(count>=k&&first<=second){
                 ans+=n-second;
                 m[nums[first]]--;
                 count-=m[nums[first]];
                 first++;
            }
            second++;
         }
         return ans;
    }
};
