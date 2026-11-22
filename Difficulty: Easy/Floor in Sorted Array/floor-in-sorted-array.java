class Solution {
    static int findFloor(int[] arr, int x) {
        // code here
        int floor = -1;
        int index = -1;
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]<=x)
            {
                floor = arr[i];
                index = i;
            }
        }
        return index;
    }
}
