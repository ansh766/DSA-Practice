class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int index1 = nums1.size()-1;
        int i = m-1;
        int j = n-1;
        while(i>=0&&j>=0){
            if(nums1[i]>=nums2[j]){
                nums1[index1] = nums1[i];
                i--;
                index1--;
            }
            else{
                nums1[index1] = nums2[j];
                j--;
                index1--;
            }
        }
        while(i>=0){
             nums1[index1] = nums1[i];
                i--; 
                index1--;
        }
        while(j>=0){
             nums1[index1] = nums2[j];
                j--; 
                index1--;
        }
    }
};
