class Solution {
    public int thirdLargest(List<Integer> arr) {
        // code here
        int first = Integer.MIN_VALUE;
        int second = Integer.MIN_VALUE;
        int third = Integer.MIN_VALUE;
        for(Integer i:arr)
        {
            if(i>first)
            {
                third = second;
                second = first;
                first=i;
            }
            else if(i>second)
            {
                third = second;
                second = i;
            }
            else if(i>third)
            {
                third = i;
            }
        }
        if(third!=Integer.MIN_VALUE)
        {
            return third;
        }
        else
        {
            return -1;
        }
    }
}