/*you are required to complete this method*/
class Solution {
  public:
    int convertFive(int n) {
        // Your code here
        stack<int> st;
        if (n==0){
            return 5; 
        }
        while(n>0){
            int last = n%10;
            if(last == 0){
                st.push(5);
            }else{
                st.push(last);
            }
            n = n / 10;
        }
        
        int ans = 0;
        while(!st.empty()){
            ans = ans * 10 + st.top();
            st.pop();
        }
        return ans;
    }
};