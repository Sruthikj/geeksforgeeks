
class Solution {
  public:
    string convert(string& s) {
        // code here
        for(int i=0;i<s.length();i++){
            if(i==0 && (s[i]>='a' && s[i]<='z')){
                s[i]=s[i]-32;
            }else if(s[i]==' ' && (s[i+1]>='a' && s[i+1]<='z')){
                s[i+1]=s[i+1] - 32;
            }
        }
        return s;
    }
};