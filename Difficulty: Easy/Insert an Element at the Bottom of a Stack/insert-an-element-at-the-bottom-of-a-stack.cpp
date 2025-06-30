// User function Template for C++

class Solution {
  public:
    stack<int> insertAtBottom(stack<int> st, int x) {
        stack<int> st1;
        while(!st.empty()){
            st1.push(st.top());
            st.pop();
        }
        st1.push(x);
        while(!st1.empty()){
            st.push(st1.top());
            st1.pop();
        }
        return st;
    }
};