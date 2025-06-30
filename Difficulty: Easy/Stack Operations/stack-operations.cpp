class Geeks {
  public:
    // Function to insert element to stack
    void insert(stack<int>& st, int x) {
        // Your code here
        st.push(x);
    }

    // Function to pop element from stack
    void remove(stack<int>& st) {
        st.pop();
        // Your code here
    }

    void headOf_Stack(stack<int>& st) {
        // Print top of stack
        cout<<st.top();
        cout<<endl;
    }

    // Function to find the element in stack, print Yes,if found, else print No.
        
    void find(stack<int>& st, int val) {
        stack<int> temp = st;
        
        while(!temp.empty()){
            if(temp.top()==val){
                cout<<"Yes\n";
                return;
            }else{
                temp.pop();
            }
        }
        cout<<"No\n";
    }
};