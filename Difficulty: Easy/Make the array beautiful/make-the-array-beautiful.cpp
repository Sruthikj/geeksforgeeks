// User function Template for C++

class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        stack<int> st;
        for(int i=0;i<arr.size();i++){
            if(!st.empty() && ((st.top()>=0 && arr[i]<0) || 
                                (st.top()<0 && arr[i]>=0))){
                st.pop();
            }else{
                st.push(arr[i]);
            }
        }
        vector<int> v;
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        reverse(v.begin(),v.end());
        return v;
    }
};