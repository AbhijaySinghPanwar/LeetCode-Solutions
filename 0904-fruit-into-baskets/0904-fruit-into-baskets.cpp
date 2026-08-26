class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> freq;

        int i = 0;
        int maxLen = 0;

        for (int j = 0; j < fruits.size(); j++) {

            // Add current fruit
            freq[fruits[j]]++;

            // More than 2 types
            while (freq.size() > 2) {
                freq[fruits[i]]--;

                if (freq[fruits[i]] == 0) {
                    freq.erase(fruits[i]);
                }

                i++;
            }

            // Valid window
            maxLen = max(maxLen, j - i + 1);
        }

        return maxLen;
    }
};