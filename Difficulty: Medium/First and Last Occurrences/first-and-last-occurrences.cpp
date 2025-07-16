class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        vector<int> a;
        vector<int> v;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==x){
                v.push_back(i);
            }
        }
        if(v.size()!=0){
            a.push_back(v[0]);
            a.push_back(v[v.size()-1]);
        }else{
            a.push_back(-1);
            a.push_back(-1);
        }
        return a;
    }
};