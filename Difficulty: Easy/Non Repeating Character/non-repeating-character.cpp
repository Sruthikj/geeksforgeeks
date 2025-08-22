
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        //  code here
        unordered_map<char,int> m;
        for(char ch:s){
            m[ch]++;
        }
        for(char ch:s){
            if(m[ch]==1){
                return ch;
            }
        }
        return '$';
    }
};