
class Solution {
  public:
    string longest(vector<string>& arr) {
        // code here
        int max=0;
        string ans = "";
        for(int i=0;i<arr.size();i++){
            int count = 0;
            for(char ch:arr[i]){
                count++;
            }
            if(count > max){
                max = count;
                ans = arr[i];
            }
        }
        return ans;
    }
};
