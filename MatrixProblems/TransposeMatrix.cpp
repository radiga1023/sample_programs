//https://leetcode.com/problems/transpose-matrix/
/*
Given a matrix A, return the transpose of A.

The transpose of a matrix is the matrix flipped over it's main diagonal, switching the row and column indices of the matrix.

 

Example 1:

Input: [[1,2,3],[4,5,6],[7,8,9]]
Output: [[1,4,7],[2,5,8],[3,6,9]]
Example 2:

Input: [[1,2,3],[4,5,6]]
Output: [[1,4],[2,5],[3,6]]
*/

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        unsigned int R = A.size();
        unsigned int C = A[0].size();
        
        vector<vector<int>> temp(A[0].size(), vector<int>(A.size()));
        
        for (unsigned int row = 0; row < R; row++)
        {
            for (unsigned int col = 0; col < C; col++)
            {
                temp[col][row] = A[row][col];
            }
        }
        return temp;
    }
};
