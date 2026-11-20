class Solution {
    public static ArrayList<Integer> findUnion(int[] a, int[] b) {
        // code here
        HashSet<Integer> h1 = new HashSet<Integer>();
        for(int i=0;i<a.length;i++)
        {
            h1.add(a[i]);
        }
        for(int i=0;i<b.length;i++)
        {
            h1.add(b[i]);
        }
        ArrayList<Integer> l1 = new ArrayList<Integer>(h1);
        return l1;
    }
}