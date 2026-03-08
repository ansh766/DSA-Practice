class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

    priority_queue<pair<int,int>,vector< pair<int,int>>,
    greater<pair<int,int>>>p;
int n = arr.size();
for(int i= 0; i<n; i++){
    int diff = abs(x-arr[i]);
   p.push({diff,arr[i]});
}
vector<int>ans;
while(k--){
 ans.push_back(p.top().second);
 p.pop();
}
sort(ans.begin(),ans.end());
return ans;

    }
};
