class Solution {
  public:
    /*Function to count even and odd elements in the array
     * arr : Array with its elements
     */
    pair<int, int> countOddEven(vector<int> &arr) {
        // your code here
        pair<int,int>p;
        int odd = 0;
        int even = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]%2==0){
                even++;
            }else{
                odd++;
            }
        }
        p.first = odd;
        p.second = even;
        return p;
    }
};