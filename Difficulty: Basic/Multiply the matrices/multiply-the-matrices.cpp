class Solution {
  public:
    bool multiplyMatrix(int mat1[4][4], int mat2[4][4], int result[4][4]) {
        // code here
        int resultcheck[4][4];
        
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                resultcheck[i][j] = 0; 
                for(int k=0;k<4;k++){
                    resultcheck[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }
        
        bool ans = true;
        
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if(resultcheck[i][j] != result[i][j]){
                    return ans = false;                    
                }
            }
        }
        
        return ans;
    }
};
