
class Solution {
  public:
    // Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int>>& mat) {
        // code here
        for(int i=0;i<mat.size();i++){
            for(int j=i;j<mat.size();j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        reverse(mat.begin(),mat.end());
    }
};
