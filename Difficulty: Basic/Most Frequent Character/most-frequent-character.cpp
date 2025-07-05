

class Solution {
  public:
    // Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string& s) {
        // Your code here
        map<char,int>mp;
        for(char ch:s){
            mp[ch] += 1;
        }
        int max = INT_MIN;
        char c;
        for(auto itr=mp.begin();itr!=mp.end();itr++){
            if(itr->second > max){
                max=itr->second;
                c=itr->first;
            }
        }
        return c;
    }
};