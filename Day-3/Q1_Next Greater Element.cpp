class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       //find the next greater element;
       stack<int>st;
       unordered_map<int,int>m;
       int n = nums2.size();
       for(int i= 0; i<n; i++){
         if(st.empty()){
            st.push(nums2[i]);
         }
         else{
            while(!st.empty()&&nums2[i]>st.top()){
                m[st.top()] = nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
         }
       }
       while(!st.empty()){
         m[st.top()] = -1;
         st.pop();
       }
     vector<int>ans;
     n = nums1.size();
     for(int i=  0; i<n; i++){
        ans.push_back(m[nums1[i]]);
     }
     return ans;
    }
};
