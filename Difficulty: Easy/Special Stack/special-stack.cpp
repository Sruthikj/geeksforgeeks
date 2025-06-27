void push(stack<int>& s, int a) {
    s.push(a);
}

bool isFull(stack<int>& s, int n) {
    return s.size() == n;
}

bool isEmpty(stack<int>& s) {
    return s.empty();
}

int pop(stack<int>& s) {
    if(!s.empty()){
        int val = s.top();
        s.pop();
        return val;
    }
}

int getMin(stack<int>& s) {
    int minVal = 100000000000000;
    while(!s.empty()){
        if(s.top() < minVal){
            minVal = s.top();
        }else{
            s.pop();
        }
    }
    return minVal;
}