// User function Template for C++

class Solution {
  public:
    string toLower(string& s) {
        
        int l = s.length();
        for(int i=0;i<l;i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] = s[i] + 32;
            }
        }
        return s;
    }
};