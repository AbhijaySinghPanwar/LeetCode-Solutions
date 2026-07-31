class Solution {
public:
    bool containsDuplicate(vector<int>& nums){
        set<int> s;
        s.insert(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(s.find(nums[i])!=s.end()) return true;
            s.insert(nums[i]);
        }
        return false;
        
    }
};