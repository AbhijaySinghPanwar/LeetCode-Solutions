class Solution {
public:
    int missingNumber(vector<int>& nums){
        int n=nums.size();
        int total_sum=0;
        for(int i=0;i<n;i++){
            total_sum+=i;
        }
        total_sum+=n;
        int cur_sum=0;
        for(int i=0;i<n;i++){
            cur_sum+=nums[i];
        }
        return total_sum-cur_sum;

    }
};