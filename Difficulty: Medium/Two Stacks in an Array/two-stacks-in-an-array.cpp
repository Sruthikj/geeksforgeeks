class twoStacks {
  public:

    stack<int> s1;
    stack<int> s2;
    
    twoStacks() {}

    // Function to push an integer into the stack1.
    void push1(int x) {
        // code here
        s1.push(x);
    }

    // Function to push an integer into the stack2.
    void push2(int x) {
        
        // code here
        s2.push(x);
    }

    // Function to remove an element from top of the stack1.
        
    int pop1() {
        // code here
        while(!s1.empty()){
            int val = -1;
            val = s1.top();
            s1.pop();
            return val;
        }
        return -1;
    }

        
    // Function to remove an element from top of the stack2.
    int pop2() {
        // code here
        while(!s2.empty()){
            int val = -1;
            val = s2.top();
            s2.pop();
            return val;
        }
        return -1;
    }
};