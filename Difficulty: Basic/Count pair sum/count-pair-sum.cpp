
class Solution {
  public:
    int countPairs(vector<int>& arr1, vector<int>& arr2, int x) {
        // code here.
        set<int> s(arr2.begin(),arr2.end());
        
        int ans = 0;
        for(int i=0;i<arr1.size();i++){
            if(s.count(x-arr1[i]) == true){
                ans++;
            }
        }
        return ans;
    }
};