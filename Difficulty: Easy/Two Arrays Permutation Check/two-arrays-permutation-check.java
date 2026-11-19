class Solution {
    public boolean checkPermutation(int[] a, int[] b) {
        // code here
        if(a.length!=b.length)
        {
            return false;
        }
        Arrays.sort(a);
        Arrays.sort(b);
        
        for(int i=0;i<a.length;i++)
        {
            if(a[i]!=b[i])
            {
                return false;
            }
        }
        return true;
    }
}