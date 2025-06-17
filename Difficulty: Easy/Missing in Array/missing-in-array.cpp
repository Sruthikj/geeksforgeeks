class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n = arr.size()+1;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-1;i++){
            if(arr[i] != i+1){
                return i+1;
            }
        }
        return n;
    }
};