class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> st;

        int i = 0;
        int sum = 0;
        int maxSum = 0;

        for (int j = 0; j < nums.size(); j++) {

            // Duplicate found
            while (st.count(nums[j])) {
                st.erase(nums[i]);
                sum -= nums[i];
                i++;
            }

            // Add current element
            st.insert(nums[j]);
            sum += nums[j];

            // Update maximum
            maxSum = max(maxSum, sum);
        }

        return maxSum;
    }
};