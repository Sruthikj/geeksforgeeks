// User function Template for C++

// Complete this function
class Solution {
  public:
    void reverseArray(vector<int>& arr) {
        stack<int> st;
        for(int i=0;i<arr.size();i++){
            st.push(arr[i]);
        }
        
        for(int i=0;i<arr.size();i++){
            arr[i] = st.top();
            st.pop();
        }
    }
};