
class Solution {
  public:
    bool isBalanced(string& k) {
        // code here
        stack<char> st;
        for(char ch : k){
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }else if((!st.empty() && ch == ')' && st.top() == '(') || 
                     (!st.empty() && ch == '}' && st.top() == '{') ||
                     (!st.empty() && ch == ']' && st.top() == '['))
            {
                st.pop();
            }
            else
            {
                st.push(ch);    
            }
        }
        if(st.empty()){
            return true;
        }else{
            return false;
        }
    }
};