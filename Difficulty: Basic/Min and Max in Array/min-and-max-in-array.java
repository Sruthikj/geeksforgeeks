class Solution {
    public ArrayList<Integer> getMinMax(int[] arr) {
        // code Here
        int max = Integer.MIN_VALUE;
        int min = Integer.MAX_VALUE;
        
        ArrayList l1 = new ArrayList();
        
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]>max)
            {
                max = arr[i];
            }
            if(arr[i]<min)
            {
                min = arr[i];
            }
        }
        
        l1.add(min);
        l1.add(max);
        
        return l1;
    }
}
