class Solution {
  public:
    // Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K) {
        // code here
        multiset<int> ms;
        for(int i=0;i<K;i++){
            for(int j=0;j<K;j++){
                ms.insert(arr[i][j]);
            }
        }
        vector<int> v;
        for(auto itr=ms.begin();itr!=ms.end();itr++){
            v.push_back(*itr);
        }
        return v;
    }
};