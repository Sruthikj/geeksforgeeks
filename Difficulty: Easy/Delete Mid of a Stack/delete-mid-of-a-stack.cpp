class Solution {
  public:
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s) {
        int middle = ((s.size() + 1)/2)-1;
        
        stack<int> s1;
        for(int i=s.size()-1;i>=middle;i--){
            if(i!=middle){
                s1.push(s.top());
                s.pop();
            }else{
                s.pop();
            }
        }
        while(!s1.empty()){
            int t = s1.top();
            s.push(t);
            s1.pop();
        }
    }
};