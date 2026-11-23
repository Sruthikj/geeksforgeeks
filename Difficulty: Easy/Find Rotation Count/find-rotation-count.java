class Solution {
    public int findKRotation(int arr[]) {
        // Code here
        int min = Integer.MAX_VALUE;
        int index = -1;
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]<min)
            {
                min = arr[i];
                index = i;
            }
        }
        return index;
    }
}