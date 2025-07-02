multiset<int> multisetInsert(int arr[], int n) {
    multiset<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    return s;
}

void multisetDisplay(multiset<int> s) {
    for(auto itr=s.begin();itr!=s.end();itr++){
        cout<<*(itr)<<" ";
    }
    cout << endl;
}

void multisetErase(multiset<int>& s, int x) {
    if(s.count(x)>0){
        cout << "erased " << x;
        s.erase(x);
    }else{
        cout << "not found";
    }

    cout << endl;
}