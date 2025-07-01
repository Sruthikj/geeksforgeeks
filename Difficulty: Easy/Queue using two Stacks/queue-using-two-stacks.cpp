// User function Template for C++
//Back-end complete function Template for C++
class StackQueue {
  private:
    stack<int> s1;
    stack<int> s2;

  public:
    void push(int B) {
        // code here
        s1.push(B);
    }

    int pop() {
        int val;
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            if(s2.empty()) return -1;
            val = s2.top();
            s2.pop();
        }
        else{
            val = s2.top();
            s2.pop();
        }
        return val;
    }
};