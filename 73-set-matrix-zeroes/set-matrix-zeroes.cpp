class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        set<int>rowzero;
        set<int>colzero;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(matrix[i][j] == 0)
                {
                    rowzero.insert(i);
                    colzero.insert(j);
                }
            }
        }
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(rowzero.count(i) || colzero.count(j))
                 matrix[i][j] = 0;
            }
        }
    }
};