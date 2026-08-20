class Solution {
    public ArrayList<Integer> getAlternates(int arr[]) {
        // Code Here
        ArrayList l1 = new ArrayList();
        
        for(int i=0;i<arr.length;i+=2)
        {
            l1.add(arr[i]);
        }
        
        return l1;
    }
}