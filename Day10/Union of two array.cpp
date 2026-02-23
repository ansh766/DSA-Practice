class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
         unordered_map<int,bool>mp;
        int n = a.size();
        vector<int>ans;
        for(int i= 0; i<n; i++){
            if(!mp.count(a[i])){
             ans.push_back(a[i]);
             mp[a[i]] = 1;
            }
        }
        int m = b.size();
        for(int i= 0; i<m; i++){
            if(!mp.count(b[i])){
               ans.push_back(b[i]);
             mp[b[i]] = 1;
            }
        }
        
       
        return ans;
        
    }
};
