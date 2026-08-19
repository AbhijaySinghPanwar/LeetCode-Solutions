class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        if(s.size() < p.size())
            return ans;

        vector<int> freqP(26, 0);
        vector<int> freqS(26, 0);

        // Frequency of p
        for(char c : p)
            freqP[c - 'a']++;

        int k = p.size();

        // First window
        for(int i = 0; i < k; i++)
            freqS[s[i] - 'a']++;

        if(freqS == freqP)
            ans.push_back(0);

        // Sliding window
        int i = 0;
        int j = k;

        while(j < s.size()) {
            freqS[s[j] - 'a']++;
            freqS[s[i] - 'a']--;

            i++;
            j++;

            if(freqS == freqP)
                ans.push_back(i);
        }

        return ans;
    }
};