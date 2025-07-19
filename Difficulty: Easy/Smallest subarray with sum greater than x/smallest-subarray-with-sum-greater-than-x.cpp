class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // Your code goes here
        int sum = 0;
        int small = INT_MAX;
        int l = 0;
        for(int r=0;r<arr.size();r++){
            sum += arr[r];
            while(sum > x){
                small = min(small,r-l+1);
                sum -= arr[l];
                l++;
            }
        }
        if(small == INT_MAX){
            return 0; 
        }else{
            return small;
        }
    }
};