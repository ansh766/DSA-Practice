class Solution {
  public:
void merge(vector<int>&arr,int start,int mid,int end,int&count){
     vector<int>temp(end-start+1);
     int left = start,right = mid+1;
     int index = 0;
     while(left<=mid&&right<=end){
          if(arr[left]<=arr[right]){
              temp[index] = arr[left];
              left++;
              index++;
          }
          else{
               count+=mid-left+1;
                temp[index] =arr[right];
                index++;
                right++;
          }
     }
     while(left<=mid){
             temp[index] = arr[left];
               left++;
              index++;
     }
     while(right<=end){
             temp[index] =arr[right];
                index++;
                right++; 
     }
     index = 0;
     while(start<=end){
          arr[start] = temp[index];
          index++;
          start++;
     }
}
void mergesort(vector<int>&arr,int&count,int start,int end){
     if(start>=end){
          return ;
     }
     int mid = start+(end-start)/2;
     mergesort(arr,count,start,mid);
     mergesort(arr,count,mid+1,end);
     merge(arr,start,mid,end,count);
}
    int inversionCount(vector<int> &arr) {
        int count = 0;
        mergesort(arr,count,0,arr.size()-1);
        return count;
    }
};
