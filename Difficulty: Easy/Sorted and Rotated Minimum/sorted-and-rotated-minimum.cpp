class Solution {
  public:
    int findMin(vector<int>& arr) {
        // complete the function here
        int min = INT_MAX;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<min){
                min = arr[i];
            }
        }
        return min;
    }
};