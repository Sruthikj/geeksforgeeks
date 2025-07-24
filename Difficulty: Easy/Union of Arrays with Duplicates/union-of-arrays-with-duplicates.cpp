class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        vector<int> v;
        set<int> s;
        for(int i=0;i<a.size();i++){
            s.insert(a[i]);
        }
        for(int i=0;i<b.size();i++){
            s.insert(b[i]);
        }
        for(auto it=s.begin();it!=s.end();it++){
            v.push_back(*it);
        }
        return v;
    }
};