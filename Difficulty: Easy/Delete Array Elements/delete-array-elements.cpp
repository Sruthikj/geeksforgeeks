class Solution {
  public:
    vector<int> deleteElement(vector<int>& arr, int k) {
        // complete the function
        stack<int> st;
        for(int i=0;i<arr.size();i++){
            while(!st.empty() && st.top()<arr[i] && k>0){
                st.pop();
                k--;
            }
            st.push(arr[i]);
        }
        
        vector<int> v;
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        
        vector<int> v1;
        for(int i=v.size()-1;i>=0;i--){
            v1.push_back(v[i]);
        }
        
        return v1;
    }
};