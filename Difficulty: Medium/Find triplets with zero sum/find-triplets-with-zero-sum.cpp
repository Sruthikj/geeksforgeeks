class Solution {
  public:
    bool findTriplets(vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        if(arr.size()<3) return false;
        for(int i=0;i<arr.size()-2;i++){
            if(i > 0 && arr[i] == arr[i - 1]) continue;
            int l = i+1;
            int r = arr.size()-1;
            while(l<r){
                int sum = arr[i]+arr[l]+arr[r];
                if(sum == 0){
                    return true;
                }else if(sum < 0){
                    l++;
                }else{
                    r--;
                }
            }
        }
        return false;
    }
};