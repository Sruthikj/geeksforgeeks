// User function Template for C++
class Solution {
  public:
    bool isFrequencyUnique(int n, int arr[]) {
        
        map<int,int> mp;
        set<int> s;
        int value_count = 0;
        
        for(int i=0;i<n;i++){
            mp[arr[i]] += 1; 
        }
        
        for(auto it=mp.begin();it!=mp.end();it++){
            s.insert(it->second);
            value_count++;
        }
        
        if(value_count - s.size() == 0){
            return true;
        }else{
            return false;
        }
        
    }
};