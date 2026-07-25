class Solution {
public:
    int missingNumber(vector<int>& nums){
        int total_sum=0;
        int cur_sum=0;
        for(int i=0;i<nums.size();i++){
            cur_sum+=nums[i];
            total_sum+=i;
        }
        total_sum+=nums.size();
        return total_sum-cur_sum;

    }
};