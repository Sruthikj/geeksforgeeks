// User function template for C++

class Solution {
  public:
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s) {
        int mid = ((s.size()+1)/2)-1;
        
        stack<int> st;
        
        for(int i=s.size()-1;i>=mid;i--){
            if(i!=mid){
                st.push(s.top());
                s.pop();
            }else{
                s.pop();
            }
        }
        
        while(!st.empty()){
            s.push(st.top());
            st.pop();
        }
        
    }
};