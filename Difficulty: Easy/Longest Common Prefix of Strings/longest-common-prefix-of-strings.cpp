// User function template for C++
class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        // your code here
        sort(arr.begin(),arr.end());
        string str1 = arr[0];
        string str2 = arr[arr.size()-1];
        string ans = "";
        
        for(int i=0;i<str1.length();i++){
            if(str1[i]==str2[i]){
                ans += str1[i];
            }else{
                break;
            }
        }
        return ans;
    }
};