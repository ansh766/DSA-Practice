class Solution {
public:
    string trimTrailingVowels(string s) {
        string ans = "";
    int n = s.size();
        int count = 0;
        for(int i= n-1; i>=0; i--){
             if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'){
                 ans+=s[i];
                 count++;
             }
 else if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')&&count>0){
                 ans+=s[i];
             }
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
