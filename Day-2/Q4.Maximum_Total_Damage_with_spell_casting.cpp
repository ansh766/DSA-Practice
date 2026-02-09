class Solution {
public:
    long long find(int i, int n, vector<long long>& dp,
                   vector<int>& ans, unordered_map<int,int>& m) {

        if(i >= n){
            return 0;
        }

        if(dp[i] != -1){
            return dp[i];
        }

        // next index jahan value >= ans[i] + 3
        auto it = lower_bound(ans.begin(), ans.end(), ans[i] + 3);
        int index = it - ans.begin();

        long long pick = ans[i] * 1LL * m[ans[i]] 
                         + find(index, n, dp, ans, m);

        long long skip = find(i + 1, n, dp, ans, m);

        return dp[i] = max(pick, skip);
    }

    long long maximumTotalDamage(vector<int>& power) {

        unordered_map<int,int> m;
        for(int i = 0; i < power.size(); i++){
            m[power[i]]++;
        }

        vector<int> ans;
        for(auto it : m){
            ans.push_back(it.first);
        }
        sort(ans.begin(), ans.end());

        int n = ans.size();
        vector<long long> dp(n, -1);

        return find(0, n, dp, ans, m);
    }
};
