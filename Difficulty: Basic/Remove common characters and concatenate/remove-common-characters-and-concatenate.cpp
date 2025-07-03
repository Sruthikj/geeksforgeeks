

class Solution {
  public:
    // Function to remove common characters and concatenate two strings.
    string concatenatedString(string s1, string s2) {
        // Your code here
        set<char> set1;
        for(char ch:s2){
            set1.insert(ch);
        }
        set<char> set2;
        for(char ch:s1){
            set2.insert(ch);
        }
        string common = "";
        for(char ch : s1){
            if(set1.count(ch) != true){
                common += ch;
            }
        }
        
        for(char ch : s2){
            if(set2.count(ch) != true){
                common += ch;
            }
        }
        
        if(common == ""){
            return "-1";
        }else{
            return common;
        }
    }
};