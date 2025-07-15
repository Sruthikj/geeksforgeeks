class Solution {
  public:
    bool divby13(string &s) {
        // code here
        int num = 0;
        for(char ch:s){
            int digit = ch - '0';
            num = ((num * 10) + digit) % 13;
        }
        if(num == 0){
            return true;
        }else{
            return false;
        }
    }
};