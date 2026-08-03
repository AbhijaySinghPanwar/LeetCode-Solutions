class Solution {
public:
    int findMaxLength(vector<int>& nums) {

        if (nums[0] == 0) nums[0] = -1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == 0) nums[i] = -1;
            nums[i] += nums[i - 1];
        }

        unordered_map<int, int> mp;
        mp[0] = -1;

        int maxlen = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (mp.find(nums[i]) != mp.end()) {
                int len = i - mp[nums[i]];
                if (len > maxlen) maxlen = len;
            }
            else {
                mp[nums[i]] = i;
            }
        }

        return maxlen;
    }
};