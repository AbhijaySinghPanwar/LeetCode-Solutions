class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k){
        typedef pair<int,int> pi;
        unordered_map<int,int>mp;
        for(int ele: nums) mp[ele]++;
        priority_queue<pi,vector<pi>, greater<pi>> pq;
        for(auto x: mp){
            int ele=x.first;
            int fre=x.second;
            pq.push({fre,ele});
            if(pq.size()>k) pq.pop();
        }
        vector<int> ans;
        while(pq.size()>0){
            int x=pq.top().second;
            pq.pop();
            ans.push_back(x);
        }
        return ans;
        
    }
};