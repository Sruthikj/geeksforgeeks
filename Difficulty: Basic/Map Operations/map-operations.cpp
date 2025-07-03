map<int, int> mapInsert(vector<int>& arr) {
    map<int, int> mp;
    // Insert arr[i] as key and i as value
    for(int i=0;i<arr.size();i++){
        mp[arr[i]] = i;
    }
    return mp;
}

void mapDisplay(map<int, int>& mp) {
    //Print every key and value pair in a new line
    for(auto it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}

void mapErase(map<int, int>& mp, int x) {
    // Write the if and else condition to erase x from map
    if(mp.count(x) == true){
        cout << "erased " << x;
        mp.erase(x);
    }
    else{
        cout << "not found";
    }

    cout << endl;
}