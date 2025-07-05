class Solution {
  public:
    char firstRep(string s) {
        // code here.
        for(int i=0;i<s.length();i++){
            int count = 0;
            for(int j=0;j<s.length();j++){
                if(s[i]==s[j]){
                    count++;
                }
                if(count>1){
                    return s[i];
                }
            }
        }
        return '#';
    }
};