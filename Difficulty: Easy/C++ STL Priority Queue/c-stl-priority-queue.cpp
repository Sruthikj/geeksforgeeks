/*add the element in the
priority queue*/
void addElement(priority_queue<int> &A, int x) {
    // your code here
    A.push(x);
}

/* remove top element from
the priority queue*/
void remove_Element(priority_queue<int> &A) {
    
    if(!A.empty()){
        cout<<A.top()<<endl;
        A.pop();
    }else{
        cout<<-1<<endl;
    }
    // your code here
}

/*  returns the top element
of the priority queue*/
    
int getElement_at_top(priority_queue<int> &A) {
    // your code here
    if(!A.empty()){
        return A.top();
    }else{
        return -1;
    }
}

/* returns the size of
    
the priority queue*/
int getSize(priority_queue<int> &A) {
    // your code here
    if(!A.empty()){
        return A.size();
    }else{
        return -1;
    }
}

    
/* prints the element in
the priority queue*/
void print(priority_queue<int> &A) {
    // your code here
    
    if (A.empty()) {
        cout << -1 << endl;
        return;
    }
    priority_queue<int> temp = A;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}
