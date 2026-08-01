class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<string>sorted=strs;
        vector<vector<string>> arr;
        for(int i=0;i<strs.size();i++) sort(sorted[i].begin(),sorted[i].end());
        for(int i=0;i<strs.size();i++) mp[sorted[i]].push_back(strs[i]);
        for(auto x: mp){
            arr.push_back(x.second);
        }
        return arr;
    }
};