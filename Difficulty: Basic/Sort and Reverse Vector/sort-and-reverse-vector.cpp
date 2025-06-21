vector<int> sortVector(vector<int> v) {
    sort(v.begin(),v.end());
    return v;
}

vector<int> reverseVector(vector<int> v) {
    vector<int> rev;
    for(auto it=v.rbegin();it!=v.rend();it++){
        rev.push_back(*it);
    }
    return rev;
}