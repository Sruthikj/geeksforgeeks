class Solution {
    boolean twoSum(int arr[], int target) {
        // code here
        HashSet<Integer> h1 = new HashSet<Integer>();
        
        for(int i=0;i<arr.length;i++)
        {
            int needed = target - arr[i];
            if(h1.contains(needed))
            {
                return true;
            }
            h1.add(arr[i]);
        }
        return false;
    }
}