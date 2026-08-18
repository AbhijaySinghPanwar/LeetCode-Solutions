class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int flips=0,i=0,j=0;
        int maxlen=INT_MIN;
        while(j<nums.size()){
            if(nums[j]==1) j++;
            else{
                if(flips<k){
                    flips++;
                    j++;
                }
                else{
                    int len=j-i;
                    maxlen=max(len,maxlen);
                    while(nums[i]==1) i++;
                    i++;
                    j++;
                    //flips--;
                }
            }

        }
        int len=j-i;
        maxlen=max(len,maxlen);
        return maxlen;
    }
};