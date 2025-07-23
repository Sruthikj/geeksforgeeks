// User function template for C++

class Solution {
  public:
    // Function to check if two arrays are equal or not.
    bool checkEqual(vector<int>& a, vector<int>& b) {
        // code here
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        bool ans = true;
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i]){
                ans = false;
                break;
            }
        }
        return ans;
    }
};