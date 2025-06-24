// User function Template for C++

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        vector<int> elements;
        
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                elements.push_back(Mat[i][j]);
            }
        }
        sort(elements.begin(),elements.end());
        
        int ind = 0; 
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                Mat[i][j] = elements[ind];
                ind++;
            }
        }
        
        return Mat;
    }
};