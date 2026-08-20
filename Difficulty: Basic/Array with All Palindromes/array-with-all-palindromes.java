class Solution {
    public static boolean isPalinArray(int[] arr) {
        // code here.
        boolean isPalindrome = false;
        
        for(int i=0;i<arr.length;i++)
        {
            int n = arr[i];
            int temp = arr[i];
            int rev = 0;
            
            while(n!=0)
            {
                int last = n%10;
                rev = rev * 10 + last;
                n = n/10;
            }
            
            if(temp != rev)
            {
                return false;
            }
        }
        return true;
    }
}