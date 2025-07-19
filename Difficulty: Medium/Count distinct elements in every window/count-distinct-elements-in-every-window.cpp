class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here.
        unordered_map<int,int> um;
        vector<int> v;
        for(int i=0;i<k;i++){
            um[arr[i]] += 1;
        }
        v.push_back(um.size());
        for(int i=k;i<arr.size();i++){
            um[arr[i-k]] -= 1;
            if(um[arr[i-k]] == 0){
                um.erase(arr[i-k]);
            }
            um[arr[i]] += 1;
            v.push_back(um.size());
        }
        return v;
    }
};