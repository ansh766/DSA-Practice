class Solution {
public:
static bool Mycompare(string&n1,string&n2){
     return {(n1+n2)>(n2+n1)};
}
    string largestNumber(vector<int>& nums) {
        int n = nums.size();

    vector<string>number;
    for(int i= 0; i<n; i++){
        number.push_back(to_string(nums[i]));
    }
    sort(number.begin(),number.end(),Mycompare);

    string  ans = "";
    for(int i= 0; i<n; i++){
         ans+=number[i];
    }
    int index = 0;
        while(index<ans.size()&&ans[index]=='0'){
             index++;
        }
        if(index<n)
        return ans.substr(index);
        else
        return "0";
    }
};
