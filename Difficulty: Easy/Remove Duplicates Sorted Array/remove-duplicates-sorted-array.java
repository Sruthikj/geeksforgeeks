class Solution {
    ArrayList<Integer> removeDuplicates(int[] arr) {
        // code here
        
        LinkedHashSet<Integer> h1 = new LinkedHashSet<Integer>();
        
        for(int i=0;i<arr.length;i++)
        {
            h1.add(arr[i]);
        }
        
        ArrayList<Integer> l1 = new ArrayList<Integer>(h1);
        return l1;
    }
}
