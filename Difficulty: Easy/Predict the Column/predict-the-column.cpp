class Solution {
  public:
    /*Function to count zeros in each column
    * N : Number of rows and columns in array
    M is the matrix that is globally declared
    */
    int columnWithMaxZeros(vector<vector<int>> arr, int N) {

        // Your code here
        int max_count = 0;
        int index = -1;
        
        for(int i=0;i<N;i++){
            int count = 0;
            for(int j=0;j<N;j++){
                if(arr[j][i] == 0){
                    count++;
                }
            }
            if(count > max_count){
                max_count = count;
                index = i;
            }
        }
        return index;
    }
};