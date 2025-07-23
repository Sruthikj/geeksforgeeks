class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        vector<int> v;
        int l = 0;
        for(int r=1;r<arr.size();r++){
            if(arr[l]!=arr[r]){
                v.push_back(arr[l]);
                l++;
            }else{
                l++;
            }
        }
        v.push_back(arr[l]);
        return v;
    }
};