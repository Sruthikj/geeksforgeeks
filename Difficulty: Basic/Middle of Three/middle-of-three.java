class Solution {
    int middle(int a, int b, int c) {
        // code here
        
        int first = a;
        int second = 0;
        int third = 0;
        
        if(b>first)
        {
            second = first;
            first = b;
        }
        else
        {
            second = b;
        }
        
        if(c>first)
        {
            third = second;
            second = first;
            first = c;
        }
        else if(c>second)
        {
            third = second;
            second = c;
        }
        
        return second;
    }
}