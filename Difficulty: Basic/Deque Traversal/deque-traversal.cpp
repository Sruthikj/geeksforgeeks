void printDeque(deque<int> dq) {
    // code here
    while(!dq.empty()){
        int val = dq.front();
        dq.pop_front();
        cout<<val<<" ";
    }
    cout<<endl;
}
