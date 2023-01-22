class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> ans,rev;
        for(int i=0;i<s.length();i++){
            if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'  || s[i]>='0' && s[i]<='9'){
                ans.push_back(tolower(s[i]));
                }
            }
        rev=ans;
        reverse(rev.begin(),rev.end());

        if(rev == ans) return true;
        else return false;
             
    }
};
