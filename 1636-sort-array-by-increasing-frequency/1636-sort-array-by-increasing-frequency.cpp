class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        typedef pair<int,int> pi;
        unordered_map<int,int> mp;

        for (int ele : nums)
            mp[ele]++;

        priority_queue<pi, vector<pi>, greater<pi>> pq;

        for (auto x : mp) {
            int ele = x.first;
            int fre = x.second;
            pq.push({fre, -ele});   // Store -ele to get larger value first for same frequency
        }

        vector<int> ans;

        while (!pq.empty()) {
            int fre = pq.top().first;
            int ele = -pq.top().second;
            pq.pop();

            while (fre--)
                ans.push_back(ele);
        }

        return ans;
    }
};