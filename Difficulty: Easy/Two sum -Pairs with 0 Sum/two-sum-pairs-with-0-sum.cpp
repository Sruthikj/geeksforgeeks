// User function template for C++

class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        // code here
        vector<vector<int>> v;
        sort(arr.begin(),arr.end());
        int l = 0;
        int r = arr.size()-1;
        while(l<r){
            if(arr[l]+arr[r]==0){
                v.push_back({arr[l],arr[r]});
                l++;
                r--;
                while(l<r && arr[l]==arr[l-1]){
                    l++;
                }
                while(l<r && arr[r]==arr[r+1]){
                    r--;
                }
            }else if(arr[l]+arr[r]<0){
                l++;
            }else{
                r--;
            }
        }
        return v;
    }
};