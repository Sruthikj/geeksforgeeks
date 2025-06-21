class Solution {
  public:
    string reverse(const string& S) {
        // code here
        stack<char> st;
        for(int i=0;i<S.length();i++){
            st.push(S[i]);
        }
        string rev = "";
        while(!st.empty()){
            rev += st.top();
            st.pop();
        }
        return rev;
    }
};