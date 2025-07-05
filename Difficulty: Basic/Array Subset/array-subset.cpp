class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        multiset<int>s1(a.begin(),a.end());
        multiset<int>s2(b.begin(),b.end());
        
        bool ans = true;
        for(int i=0;i<b.size();i++){
            if(s2.count(b[i]) > s1.count(b[i])){
                ans = false;
                break;
            }
        }
        return ans;
    }
};