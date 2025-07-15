// User function template for C++

class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        set<int> s;
        for(int i=0;i<arr.size();i++){
            s.insert(arr[i]);
        }
        vector<int> v(s.begin(),s.end());
        
        return v[k-1];
    }
};