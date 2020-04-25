class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        if(matrix.size() == 0 || matrix[0].size() == 0)
            return false;
        int row = matrix.size(), cln = matrix[0].size();
        int i = row - 1, j = 0;
        while(i >= 0 && j < cln)
        {
            if(matrix[i][j] == target)
                return true;
            if(matrix[i][j] > target)
                i--;
            else
                j++;
        }
        return false;
    }
};
