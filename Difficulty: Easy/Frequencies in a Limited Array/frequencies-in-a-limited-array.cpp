class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        vector<int> v;
        map<int,int> m;
        for(int i=1;i<=arr.size();i++){
            m[arr[i-1]]++;
        }
        for(int i=1;i<=arr.size();i++){
            v.push_back(m[i]);
        }
        return v;
    }
};
