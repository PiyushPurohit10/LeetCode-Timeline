class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> buckets(m + n - 1);
        for (int row = 0; row < m; row++) {
            for (int col = 0; col < n; col++) {
                buckets[row + col].push_back(mat[row][col]);
            }
        }
        vector<int> ans;
        for (int d = 0; d < m + n - 1; d++) {
            if (d % 2 == 0) {
                reverse(buckets[d].begin(), buckets[d].end());
            }
            for (int val : buckets[d]) {
                ans.push_back(val);
            }
        }  
        return ans;
    }
};