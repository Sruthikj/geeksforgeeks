
class Solution {
  public:
    // Function to return list of integers that form the boundary
    // traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> >& mat) {
        // code here
        vector<int> v;
        int row = mat.size();
        int col = mat[0].size();
        
        for(int i=0;i<1;i++){
            for(int j=0;j<col;j++){
                v.push_back(mat[i][j]);
            }
        }
        for(int i=1;i<col;i++){
            for(int j=col-1;j<col;j++){
                v.push_back(mat[i][j]);
            }
        }
        for(int i=row-1;i<row;i++){
            for(int j=row-2;j>=0;j--){
                v.push_back(mat[i][j]);
            }
        }
        for(int i=row-2;i>0;i--){
            for(int j=0;j<1;j++){
                v.push_back(mat[i][j]);
            }
        }
        return v;
    }
};
