class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
        multiset<int> s;
        for(int i=0;i<a.size();i++){
            s.insert(a[i]);
        }
        for(int i=0;i<b.size();i++){
            s.insert(b[i]);
        }
        vector<int> v(s.begin(),s.end());
        return v[k-1];
    }
};