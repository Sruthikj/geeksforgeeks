class Solution {
    public ArrayList<Integer> findIntersection(int[] a, int[] b) {
        // code here
        ArrayList<Integer> l1 = new ArrayList<Integer>();
        HashSet<Integer> h1 = new HashSet<Integer>();
        for(Integer i:b)
        {
            h1.add(i);
        }
        for(Integer i:a)
        {
            if(h1.contains(i))
            {
                l1.add(i);
            }
        }
        return l1;
    }
}