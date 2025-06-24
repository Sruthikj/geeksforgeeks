// User function Template for C++

class Solution {
  public:
    int DiagonalSum(vector<vector<int> >& matrix) {
        // Code here
        int psum = 0;
        int ssum = 0;
        for(int i=0;i<matrix.size();i++){
            psum += matrix[i][i];
        }
        for(int i=0;i<matrix.size();i++){
            ssum += matrix[i][matrix.size()-1-i];
        }
        return psum + ssum;
    }
};