
class Solution {
  public:

    string reverseWithSpacesIntact(string s) {
        // code here.
        int start = 0;
        int end = s.length()-1;
        while(start < end){
            if(s[start] == ' '){
                start++;
            }
            else if(s[end] == ' '){
                end--;
            }
            else{
                swap(s[start],s[end]);
                start++;
                end--;
            }
        }
        return s;
    }
};