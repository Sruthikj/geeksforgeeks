class Solution {
    public int kthElement(int a[], int b[], int k) {
        // code here
        int[] t1 = new int[a.length+b.length];
        int index = 0;
        for(int i=0;i<a.length;i++)
        {
            t1[index++]=a[i];
        }
        
        for(int i=0;i<b.length;i++)
        {
            t1[index++]=b[i];
        }
        
        Arrays.sort(t1);
        
        return t1[k-1];
    }
}