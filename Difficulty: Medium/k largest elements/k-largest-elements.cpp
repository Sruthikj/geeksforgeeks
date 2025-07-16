class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        // Your code here
        sort(arr.begin(),arr.end(),greater<int>());
        vector<int> v;
        for(int i=0;i<k;i++){
            v.push_back(arr[i]);
        }
        return v;
    }
};