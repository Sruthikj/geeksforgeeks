class Solution {
  public:
    string modify(string& s) {
        string result = "";
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                result += s[i];
            }
        }
        return result;
    }
};