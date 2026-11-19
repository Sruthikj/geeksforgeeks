class Solution {
    public ArrayList<Integer> frequencyCount(int[] arr) {
        // code here
        ArrayList<Integer> l1 = new ArrayList();
        int[] res = new int[arr.length];
        
        for(Integer i:arr)
        {
            res[i-1]++;
        }
        
        for(Integer i:res)
        {
            l1.add(i);
        }
        
        return l1;
    }
}
