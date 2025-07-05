class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        map<int,int> mp;
        vector<int> v;
        int missing;
        int repeating;
        
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]+=1;
        }
        for(int i=1;i<=arr.size();i++){
            if(mp[i] == 2){
                repeating = i;
            }else if(mp[i] == 0){
                missing = i;
            }
        }
        
        v.push_back(repeating);
        v.push_back(missing);
        return v;
    }
};