class Solution {
    int missingNum(int arr[]) {
        // code here
        boolean[] res = new boolean[arr.length+2];
        for(Integer i:arr)
        {
            res[i]=true;
        }
        int missing = -1;
        for(int i=1;i<res.length;i++)
        {
            if(!res[i])
            {
                missing = i;
                break;
            }
        }
        return missing;
    }
}