
class Solution {
    public int countOfElements(int x, List<Integer> arr) {
        // code here
        int count = 0;
        for(Integer i:arr)
        {
            if(i<=x)
            {
                count++;
            }
        }
        return count;
    }
}