class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
        // code here
        vector<int> v;
        for(int i=0;i<arr.size();i+=2){
            v.push_back(arr[i]);
        }
        return v;
    }
};