class Solution {
    public static int prod(int base,int exp)
    {
        int prod = 1;
        for(int i=1;i<=exp;i++)
        {
            prod = prod * base;
        }
        return prod;
    }
    
    public static int findCount(int n)
    {
        int count = 0;
        while(n!=0)
        {
            count++;
            n=n/10;
        }
        return count;
    }
    
    public boolean armstrongNumber(int n) {
        // code here
        int count = findCount(n);
        
        int temp = n;
        int sum = 0;
        while(n!=0)
        {
            int last = n%10;
            sum = sum + prod(last,count);
            n=n/10;
        }
        if(sum == temp)
        {
            return true;
        }
        return false;
    }
}