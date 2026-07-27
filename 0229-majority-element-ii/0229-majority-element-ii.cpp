class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int x=n/3;
        if(n>2){
            sort(nums.begin(),nums.end());
            vector<int> maj;
            int count=1;
            for(int i=1;i<n;i++){
                if(nums[i]==nums[i-1]){
                    count++;
                    if(count>x && (maj.size()==0 || maj[0]!=nums[i])) maj.push_back(nums[i]);
                    if(maj.size()==2) break;
                }
                else count=1;
            }
            // if(nums[n-1]==nums[n-2]){
            //     count++;
            //     if(count>x) maj.push_back(nums[n-1]);
            // }
            return maj;

        }
        else{
            if(n>1 && nums[0]==nums[1]){
                vector<int>maj(1);
                maj[0]=nums[0];
                return maj;
            }

            else return nums;
        }
        
    }
};