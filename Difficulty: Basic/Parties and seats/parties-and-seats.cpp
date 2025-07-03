// User function Template for C++

/* print the name of the parties along with seats
   they got in election and print the maximum seat
   received
*/
void Election2019(vector<char>& party, vector<int>& seats) {
    
    // Your code here
    map<char,int> mp;
    
    for(int i=0;i<party.size();i++){
        mp[party[i]] = seats[i];
    }
    
    for(auto it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    
    int winner = INT_MIN;
    for(auto it=mp.begin();it!=mp.end();it++){
        if((it->second) > winner){
            winner = it->second;
        }
    }
    cout<<winner<<endl;

}