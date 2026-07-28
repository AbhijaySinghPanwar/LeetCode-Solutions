class Solution {
public:
    bool isPalindrome(string s) {
        string perfect="";
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z') perfect+=s[i];
            else if(s[i]>='A' && s[i]<='Z') perfect+=tolower(s[i]);
            else if(s[i]>='0' && s[i]<='9') perfect+=s[i];
        }
        string p=perfect;
        reverse(perfect.begin(),perfect.end());
        if(p==perfect) return true;
        return false;
    }
};