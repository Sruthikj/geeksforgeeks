
class Solution {
  public:
    int countWords(string list[], int n) {
        map<string,int> mp;
        for(int i=0;i<n;i++){
            mp[list[i]] += 1;
        }
        int count = 0;
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second == 2){
                count++;
            }
        }
        return count;
    }
};