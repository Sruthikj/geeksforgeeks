class Solution {
  public:
    int commonSum(int n1, int n2, vector<int> &arr1, vector<int> &arr2) {
        // code here
        unordered_set<int> s1(arr1.begin(),arr1.end());
        unordered_set<int> s2;
        
        for(int i=0;i<n2;++i){
            if(s1.count(arr2[i])){
                s2.insert(arr2[i]);
            }
        }
        
        int sum = 0;
        for(int x : s2){
            sum = (sum + x) % 1000000007;
        }
        
        return sum;
    }
};