set<int> setInsert(int arr[], int n) {
    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    return s;
}

void setDisplay(set<int> s) {
    // Your code here to display elements of s
    for(auto itr=s.begin();itr!=s.end();itr++){
        cout<<*(itr)<<" ";
    }
    cout << endl;
}

void setErase(set<int>& s, int x) {
    // write if condition here
    if(s.count(x) == true){
        cout << "erased " << x;
        s.erase(x);
    }else{
        // write else condition here
        cout << "not found";
    }
    cout << endl;
}