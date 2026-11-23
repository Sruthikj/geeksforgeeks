class Solution {
    public double findMedian(int[] arr) {
        // Code here.
        Arrays.sort(arr);
        int n = arr.length;
        int mid = n/2;
        if(n%2==1)
        {
            return arr[mid];
        }
        return (arr[mid-1]+arr[mid])/2.0;
    }
}
