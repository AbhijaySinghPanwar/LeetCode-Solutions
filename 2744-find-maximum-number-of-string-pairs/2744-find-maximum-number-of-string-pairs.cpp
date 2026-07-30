class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n=words.size();
        set<string> s;
        for(int i=0;i<n;i++){
            s.insert(words[i]);
        }
        int count=0;
        for(int i=0;i<n;i++){
            string temp=words[i];
            reverse(temp.begin(),temp.end());
            if(s.find(temp)!=s.end() && temp!=words[i]) count++;
        }
        return count/2;
    }
};