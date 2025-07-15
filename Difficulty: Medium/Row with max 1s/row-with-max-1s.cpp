// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int n = -1;
        int final_count = 0;
        for(int i=0;i<arr.size();i++){
            int count = 0;
            for(int j=0;j<arr[i].size();j++){
                if(arr[i][j] == 1){
                    count ++;
                }
            }
            if(count > final_count){
                final_count = count;
                n = i;
            }
        }
        return n;
    }
};