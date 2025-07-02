// User function Template for C++

class Solution {
  public:
    int minimumApple(vector<int>& arr) {
        // Complete the function
        set<int> s;
        for(int i=0;i<arr.size();i++){
            s.insert(arr[i]);
        }
        
        return s.size();
    }
};
