// User function template for c++
class Solution {
  public:
    string removeChars(string str1, string str2) {
        // code here
        set<char> s;
        for(char ch : str2){
            s.insert(ch);
        }
        string news = "";
        for(int i=0;i<str1.length();i++){
            if(s.count(str1[i])!=true){
                news += str1[i];
            }
        }
        return news;
    }
};