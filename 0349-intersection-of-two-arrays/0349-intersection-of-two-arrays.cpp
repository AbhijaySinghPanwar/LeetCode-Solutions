class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s;
        set<int>s1;
        vector<int> v;
        for(int i=0;i<nums1.size();i++){
            s.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            if(s.find(nums2[i])!=s.end()) s1.insert(nums2[i]);
        }
        for(auto x:s1){
            v.push_back(x);
        }
        return v;
    }
};