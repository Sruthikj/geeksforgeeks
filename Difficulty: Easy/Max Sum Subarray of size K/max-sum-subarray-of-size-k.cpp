class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        int maxsum = 0;
        int sum = 0;
        for(int i=0;i<k;i++){
            sum += arr[i];
        }
        maxsum = sum;
        for(int i=k;i<arr.size();i++){
            sum = sum + arr[i] - arr[i-k];
            maxsum = max(maxsum,sum);
        }
        return maxsum;
    }
};