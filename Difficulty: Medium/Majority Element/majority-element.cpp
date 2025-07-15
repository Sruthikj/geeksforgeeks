class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]] += 1;
        }
        int n = arr.size()/2;
        int ans = -1;
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second > n){
                ans = it->first;
            }
        }
        return ans;
    }
};