class Solution {
  public:
    vector<vector<int>> multiply(vector<vector<int>>& matrixA,
                                 vector<vector<int>>& matrixB) {
        // Code here
        int N = matrixA.size();
        vector<vector<int>> C(N,vector<int>(N));
        
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                for(int k=0;k<N;k++){
                    C[i][j] += matrixA[i][k] * matrixB[k][j];
                }
            }
        }
        return C;
    }
};