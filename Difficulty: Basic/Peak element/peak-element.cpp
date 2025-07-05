class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // Your code here
        for(int i=0;i<arr.size();i++){
            if(arr[i]<arr[i+1] && arr[i+1]>arr[i+2]){
                return i+1;
            }
        }
    }
};