
class Solution {
  public:
    string secFrequent(string arr[], int n) {
        // code here.
        map<string,int> m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        
        int first = INT_MIN;
        int second = INT_MIN;
        
        for(auto itr=m.begin();itr!=m.end();itr++){
            if((itr->second) > first){
                second = first;
                first = itr->second;
            }else if((itr->second) > second){
                second = itr->second;
            }
        }
        
        for(auto itr=m.begin();itr!=m.end();itr++){
            if(itr->second == second){
                return itr->first;
            }
        }
    }
};