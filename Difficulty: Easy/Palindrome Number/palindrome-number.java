class Solution {
    public boolean isPalindrome(int n) {
        // code here
        int rev = 0;
        
        if(n<0)
        {
            n = n * -1;
        }
        
        int temp = n;
        
        while(n>0){
            int rem = n%10;
            rev = rev*10 + rem;
            n=n/10;
        }
        
        if(rev == temp){
            return true;
        }
        return false;
    }
}