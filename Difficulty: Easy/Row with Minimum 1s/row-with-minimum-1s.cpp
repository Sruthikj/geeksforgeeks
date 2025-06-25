class Solution {
  public:
    int minRow(vector<vector<int>> &mat) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        
        int min_count = INT_MAX;
        int final_index = 0;
        
        for(int i=0;i<n;i++){
            int count = 0;
            for(int j=0;j<m;j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
            if(count<min_count){
                min_count=count;
                final_index = i + 1;
            }
        }
        return final_index;
    }
};