/*Complete the function below*/

class Solution {
  public:
    bool isPalinArray(vector<int> &arr) {
        // code here
        int ans = true;
        
        for(int i=0;i<arr.size();i++){
            int rev = 0;
            int n = arr[i];
            int temp = arr[i];
            while(n>0){
                int last = n % 10;
                rev = rev * 10 + last;
                n = n / 10;
            }
            if(rev != temp){
                ans = false;
                break;
            }
        }
        return ans;
    }
};