class Solution {
public:
    int rev(int n){
        int ans=0;
        while(n>0){
            int m=n%10;
            ans*=10;
            ans+=m;
            n/=10;
        }
        return ans;
    }
    int countNicePairs(vector<int>& nums){
        for(int i=0;i<nums.size();i++) nums[i]=nums[i]-rev(nums[i]);
        unordered_map<int,int> mp;
        int count=0;
        for(int i=0;i<nums.size();i++){
            count=(count+mp[nums[i]])%1000000007;
            mp[nums[i]]++;
        }
        return count%1000000007;
        
    }
};