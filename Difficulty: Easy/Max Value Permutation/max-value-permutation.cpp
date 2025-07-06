class Solution {
  public:
    int maxValue(vector<int> &arr) {
        // Complete the function
        //int ans;
        sort(arr.begin(),arr.end());
        long long m=0;
        long long sum=0;
        for(int i=0;i<arr.size();i++){
            sum = ((sum + arr[i]*m) % 1000000007) % 1000000007 ;
            m++;
        }
        return sum ;
    }
};