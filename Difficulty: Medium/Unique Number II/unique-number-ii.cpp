class Solution {
  public:
    vector<int> singleNum(vector<int>& arr) {
        // Code here.
        vector<int> v;
        map<int,int> m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        for(auto itr=m.begin();itr!=m.end();itr++){
            if(itr->second == 1){
                v.push_back(itr->first);
            }
        }
        return v;
    }
};