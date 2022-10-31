class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int rows = matrix.size(),cols = matrix[0].size();
        // if(rows == 1 || cols == 1) 
        //     return true;
        for(int row=1;row<rows;++row){
            for(int col=1;col<cols;++col){
                if(matrix[row-1][col-1]!=matrix[row][col])
                    return false;
            }
        }
        return true;
    }
};