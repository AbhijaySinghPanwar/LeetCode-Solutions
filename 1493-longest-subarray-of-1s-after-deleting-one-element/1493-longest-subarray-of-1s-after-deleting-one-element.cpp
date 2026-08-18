class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0,j=0;
        int one=0;
        int maxlen=0;
        while(j<nums.size()){
            if(nums[j]==1)j++;
            else{
                if(one==0){
                    one++;
                    j++;
                }
                else{
                    int len=j-i-1;
                    maxlen=max(maxlen,len);
                    while(nums[i]==1) i++;
                    i++;
                    j++;

                }
            }
        }
        int len=j-i-1;
        maxlen=max(maxlen,len);
        if(one==0) return maxlen;
        return maxlen;
    }
};