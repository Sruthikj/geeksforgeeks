class Solution {
  public:
    // arr[] is the array
    long long int product(vector<int> &arr) {
        // code here
        long long mod = 1000000007;
        long long prod = 1;
        for(int i=0;i<arr.size();i++){
            prod = (prod * arr[i]) % mod;
        }
        return prod;
    }
};