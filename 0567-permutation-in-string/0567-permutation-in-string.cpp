class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length())
            return false;

        vector<int> count1(26, 0);
        vector<int> count2(26, 0);

        // Count characters in s1
        for (char c : s1) {
            count1[c - 'a']++;
        }

        // Create first window of size s1.length()
        for (int i = 0; i < s1.length(); i++) {
            count2[s2[i] - 'a']++;
        }

        // Check first window
        if (count1 == count2)
            return true;

        // Slide the window
        for (int i = s1.length(); i < s2.length(); i++) {

            // Add new character
            count2[s2[i] - 'a']++;

            // Remove character leaving the window
            count2[s2[i - s1.length()] - 'a']--;

            // Compare frequencies
            if (count1 == count2)
                return true;
        }

        return false;
    }
};