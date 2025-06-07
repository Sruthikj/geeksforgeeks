class Solution {
  public:
    int sumOfDigits(int n) {
        int sum = 0;
        
        while(n>0){
            int last = n % 10;
            n = n / 10;
            sum = sum + last;
        }
        return sum;
    }
};