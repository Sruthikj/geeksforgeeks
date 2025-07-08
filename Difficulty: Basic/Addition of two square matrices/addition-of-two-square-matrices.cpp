// User function Template for C++

class Solution {
  public:
    void Addition(vector<vector<int>>& matrixA, vector<vector<int>>& matrixB) {
        // Code here
        // int row = matrixA.size();
        // int col = matrixA[0].size();
        
        for(int i=0;i<matrixA.size();i++){
            for(int j=0;j<matrixA[0].size();j++){
                matrixA[i][j] += matrixB[i][j];
            }
        }
    }
};