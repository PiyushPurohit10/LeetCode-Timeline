class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int> wayne;
        int startingRow = 0;
        int startingCol = 0; 
        int endingRow = row - 1;
        int endingCol = col - 1;

        int count = 0;
        int total = row * col;

        while (count < total) {
            for (int index = startingCol; count < total && index <= endingCol; index++) {
                wayne.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;
            for (int index = startingRow; count < total && index <= endingRow; index++) {
                wayne.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;
            for(int index = endingCol; count < total && index >= startingCol; index--) {
                wayne.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;
            for (int index = endingRow; count < total && index >= startingRow; index--) {
                wayne.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
        }
        return wayne;
    }
};