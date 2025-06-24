// User function Template for C++

class Solution {
  public:
    int areMatricesIdentical(int N, vector<vector<int>> Grid1,
                             vector<vector<int>> Grid2) {
        // code here
        bool ans = true;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(Grid1[i][j] != Grid2[i][j]){
                    ans = false;
                    break;
                }
            }
        }
        if(ans == true){
            return 1;
        }else{
            return 0;
        }
    }
};