class Solution {
public:
    string makeFancyString(string s){
        string ans="";
        int n=0;
        if(s.size()<3) return s;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]){
                if(n==0){
                    ans+=s[i];
                    n++;
                }
            }
            if(s[i]!=s[1+i]){
                ans+=s[i];
                n=0;
            }
            
        }
        ans+=s[s.size()-1];
        return ans;
        
    }
};