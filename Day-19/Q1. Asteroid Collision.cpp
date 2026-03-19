class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>ans;
        stack<int>st;
        int n = asteroids.size();
        
    for(int i = 0; i<n; i++){
        bool flag = 1;
        while(!st.empty()&&asteroids[i]<0&&st.top()>=0){
          
             if(abs(asteroids[i])==st.top()){
                st.pop();
                flag = 0;
                break;
             }
             else if(abs(asteroids[i])>st.top()){
                st.pop();
             }
             else{
                flag = 0;
                 break;
             }
             
          }
          if(flag)
        st.push(asteroids[i]);
    }
       while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
        }
        
};
