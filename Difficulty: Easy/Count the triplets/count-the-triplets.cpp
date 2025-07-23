class Solution {
  public:
    int countTriplet(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        int count = 0;
        for(int k=arr.size()-1;k>=2;k--){
            int i=0;
            int j=k-1;
            while(i<j){
                if(arr[i]+arr[j]==arr[k]){
                    count++;
                    i++;
                    j--;
                }else if(arr[i]+arr[j] > arr[k]){
                    j--;
                }else{
                    i++;
                }
            }
        }
        return count;
    }
};