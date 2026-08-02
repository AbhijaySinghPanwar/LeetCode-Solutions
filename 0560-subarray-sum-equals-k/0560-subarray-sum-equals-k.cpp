class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        for(int i=1;i<nums.size();i++)nums[i]=nums[i]+nums[i-1];
        unordered_map<int,int>mp;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==k) count++;
            int rem=nums[i]-k;
            if(mp.find(rem)!=mp.end()) count=count+mp[rem];
            mp[nums[i]]++;
        }
        return count;
    }
};