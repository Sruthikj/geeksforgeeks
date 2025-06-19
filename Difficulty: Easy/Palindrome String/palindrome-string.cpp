class Solution {
  public:
    // Function to check if a string is a palindrome.
    bool isPalindrome(string& s) {
        // code here
        int start=0;
        int end=s.length()-1;
        bool ans = false;
        while(start<end){
            if(s[start]==s[end]){
                ans = true;
                start++;
                end--;
            }else{
                ans = false;
                break;
            }
        }
        return ans;
    }
};