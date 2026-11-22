class Solution {
    ArrayList<Integer> find(int arr[], int x) {
        // code here
        ArrayList<Integer> l1 = new ArrayList<Integer>();
        int start = -1;
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]==x)
            {
                start = i;
                break;
            }
        }
        int end = -1;
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]==x)
            {
                end = i;
            }
        }
        l1.add(start);
        l1.add(end);
        
        return l1;
    }
}
