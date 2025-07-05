// Return true if s is binary, else false
class Solution {
  public:
    bool isBinary(string& s) {
        // Your code here
        bool ans = true;
        for(int i=0;i<s.length();i++){
            if(s[i]!='1' && s[i]!='0'){
                ans = false;
                break;
            }
        }
        return ans;
    }
};