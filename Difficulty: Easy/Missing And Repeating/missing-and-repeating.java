class Solution {
    ArrayList<Integer> findTwoElement(int arr[]) {
        // code here
        ArrayList<Integer> l1 = new ArrayList();
        int missing = -1;
        int repeating = -1;
        
        boolean[] res = new boolean[arr.length+1];
        
        for(Integer i:arr)
        {
            if(res[i])
            {
                repeating = i;
            }
            res[i]=true;
        }
        
        for(int i=1;i<res.length;i++)
        {
            if(!res[i])
            {
                missing = i;
                break;
            }
        }
        
        l1.add(repeating);
        l1.add(missing);
        
        return l1;
    }
}
