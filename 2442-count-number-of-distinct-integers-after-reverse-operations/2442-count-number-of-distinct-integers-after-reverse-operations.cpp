class Solution {
public:
    int reverse(int a){
        int r=0;
        while(a>0){
            r*=10;
            r+=a%10;
            a/=10;
        }
        return r;
    }
    int countDistinctIntegers(vector<int>& nums){
        set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
            s.insert(reverse(nums[i]));
        }
        return s.size();
    }

};