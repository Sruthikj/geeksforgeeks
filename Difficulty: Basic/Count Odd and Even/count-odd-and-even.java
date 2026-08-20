class Solution {
    public int[] countOddEven(int[] arr) {
        // Code here
        int[] ans = new int[2];
        
        int odd=0;
        int even=0;
        
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]%2==0)
            {
                even++;
            }else
            {
                odd++;
            }
        }
        
        ans[0] = odd;
        ans[1] = even;
        
        return ans;
    }
}