/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */
void QueueStack ::push(int x) {
    // code here
    while(!q1.empty()){
        q2.push(q1.front());
        q1.pop();
    }
    q1.push(x);
    while(!q2.empty()){
        q1.push(q2.front());
        q2.pop();
    }
}

int QueueStack ::pop() {
    int val;
    if(q1.empty()){
        return -1;
    }else{
        val = q1.front();
        q1.pop();
    }
    return val;
    // code here
}