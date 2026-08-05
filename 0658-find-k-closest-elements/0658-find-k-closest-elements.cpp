class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        typedef pair<int,int> pi;
        vector<int> ans;
        unordered_map<int,int> mp;
        priority_queue<pi>pq;
        for(int i=0;i<arr.size();i++) mp[i]=abs(arr[i]-x);
        for(auto z: mp){
            pq.push({z.second,z.first});
            if(pq.size()>k) pq.pop();
        }
        set<int> s;
        while(pq.size()>0){
            int ele=pq.top().second;
            pq.pop();
            s.insert(ele);
        }
        for(auto z: s) ans.push_back(arr[z]);
        return ans;

    }
};