class Solution {
  public:
    string removePair(string s) {
        // code here
        stack<char> st;
        for(char ch:s){
            if(!st.empty() && ch == st.top()){
                st.pop();
            }else{
                st.push(ch);
            }
        }
        string ans = "";
        while(!st.empty()){
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};