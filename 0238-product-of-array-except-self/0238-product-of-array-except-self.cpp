class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int zero = 0;
        int product = 1;

        for (int x : nums) {
            if (x == 0)
                zero++;
            else
                product *= x;
        }

        for (int i = 0; i < nums.size(); i++) {

            if (zero > 1)
                nums[i] = 0;

            else if (zero == 1) {
                if (nums[i] == 0)
                    nums[i] = product;
                else
                    nums[i] = 0;
            }

            else
                nums[i] = product / nums[i];
        }

        return nums;
    }
};