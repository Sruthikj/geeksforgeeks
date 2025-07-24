class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        sort(arr.begin(),arr.end());
        if(arr.size()<2) return false; 
        int l = 0;
        int r = arr.size()-1;
        while(l<r){
            if(arr[l]+arr[r]==target){
                return true;
            }else if(arr[l]+arr[r]<target){
                l++;
            }else{
                r--;
            }
        }
        return false;
    }
};