class Solution {
    public int reverseExponentiation(int n) {
        // code here
        int base = n;
        int rev = 0;
        while(n!=0)
        {
            int last=n%10;
            rev=rev*10+last;
            n=n/10;
        }
        int prod = 1;
        for(int i=1;i<=rev;i++)
        {
            prod = prod * base;
        }
        return prod;
    }
}
