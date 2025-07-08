// User function template for C++

class Solution {
  public:
    int diagonalSumDifference(int N, vector<vector<int>> Grid) {
        // code here
        int ps=0;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(i==j){
                    ps += Grid[i][j];
                }
            }
        }
        
        int ss=0;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(j==N-1-i){
                    ss += Grid[i][j];
                }
            }
        }
        
        return abs(ps-ss);
    }
};