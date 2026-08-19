class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k){
        double sum=0;
        for(int i=0;i<k;i++) sum+=nums[i];
        double avg=sum/k;
        int i=1,j=k;
        while(j<nums.size()){
            sum+=nums[j]-nums[i-1];
            double new_avg=sum/k;
            avg=max(avg,new_avg);
            j++;
            i++;
        }
        return avg;
    }
};