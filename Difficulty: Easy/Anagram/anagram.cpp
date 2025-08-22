class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        map<char,int> m1;
        map<char,int> m2;
        for(char ch:s1){
            m1[ch]++;
        }
        for(char ch:s2){
            m2[ch]++;
        }
        if (m1!=m2){
            return false;
        }
        return true;
    }
};