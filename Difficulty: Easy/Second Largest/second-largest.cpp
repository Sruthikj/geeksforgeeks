class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest = INT_MIN;
        int second = INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>largest){
                second = largest;
                largest = arr[i];
            }else if(arr[i]>second && arr[i]!=largest){
                second = arr[i];
            }
        }
        if(second != INT_MIN){
            return second;
        }else{
            return -1;
        }
    }
};