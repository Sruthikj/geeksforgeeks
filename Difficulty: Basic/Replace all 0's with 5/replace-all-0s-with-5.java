class Solution {
    public int convertFive(int n) {
        // code here
        
        if(n==0)
        {
            return 5;
        }
        
        int rev = 0;
        
        while(n!=0)
        {
            int last = n%10;
            if(last==0)
            {
                rev = rev * 10 + 5;
            }
            else
            {
                rev = rev * 10 + last;
            }
            n=n/10;
        }
        
        int ans = 0;
        
        while(rev!=0)
        {
            int l = rev%10;
            ans = ans * 10 + l;
            rev = rev/10;
        }
        
        return ans;
    }
}