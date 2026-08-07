class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {

        int m = mat.size();
        int n = mat[0].size();

        vector<vector<int>> prefix = mat;

        // Build Prefix Sum
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                int top = (i > 0) ? prefix[i - 1][j] : 0;
                int left = (j > 0) ? prefix[i][j - 1] : 0;
                int topLeft = (i > 0 && j > 0) ? prefix[i - 1][j - 1] : 0;

                prefix[i][j] = mat[i][j] + top + left - topLeft;
            }
        }

        vector<vector<int>> ans(m, vector<int>(n));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                int r1 = max(0, i - k);
                int c1 = max(0, j - k);

                int r2 = min(m - 1, i + k);
                int c2 = min(n - 1, j + k);

                int total = prefix[r2][c2];
                int top = (r1 > 0) ? prefix[r1 - 1][c2] : 0;
                int left = (c1 > 0) ? prefix[r2][c1 - 1] : 0;
                int topLeft = (r1 > 0 && c1 > 0) ? prefix[r1 - 1][c1 - 1] : 0;

                ans[i][j] = total - top - left + topLeft;
            }
        }

        return ans;
    }
};