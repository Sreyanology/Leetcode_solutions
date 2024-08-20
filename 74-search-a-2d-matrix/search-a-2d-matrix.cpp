class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int row = -1;
        if(target>matrix[m-1][n-1])
         return false;
        for(int i =0; i<m; i++)
        {
            if(matrix[i][n-1]>=target)
            {
                row = i;
                break;
            }
        }
        int low = 0;
        int high = n-1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(matrix[row][mid] == target)
             return true;
            else if(matrix[row][mid]<target)
             low = mid + 1;
            else
             high = mid -1;
        }
        return false;
    }
};