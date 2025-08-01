class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        // Your code here
        if (arr.size()<3) return -1;
        int first = INT_MIN;
        int second = INT_MIN;
        int third = INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>first){
                third = second;
                second = first;
                first = arr[i];
            }else if(arr[i]>second){
                third = second;
                second = arr[i];
            }else if(arr[i] > third){
                third = arr[i];
            }
        }
        return third;
    }
};