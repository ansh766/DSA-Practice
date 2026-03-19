class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int n= nums.size();
        m[0] = 1;

        int prefix = 0;
        int count = 0;
    for(int i= 0; i<n; i++){
         prefix+=nums[i];
         int r = prefix % k;       // step 1
            r = (r + k) % k;  
         if(m.count(r)){ 
            count+=m[r];
         }
         m[r]++;
    }
    return count;
    }
};
