/* print the name of the parties along with seats
   they got in election and print the maximum seat
   received
*/
// void Election2019(char party[], int seats[], int n) {
//     // Your code here
//     map<char,int> mp;
    
//     for(int i=0;i<n;i++){
//         mp[party[i]] = seats[i];
//     }
    
//     for(auto it=mp.begin();it!=mp.end();it++){
//         cout<<it->first<<" "<<it->second<<endl;
//     }
    
//     int winner = INT_MIN;
//     for(auto it=mp.begin();it!=mp.end();it++){
//         if((it->second) > winner){
//             winner = it->second;
//         }
//     }
//     cout<<winner;
// }

void Election2019(char party[], int seats[], int n) {
    map<char, int> mp;

    for (int i = 0; i < n; i++) {
        mp[party[i]] += seats[i];  // Accumulate if duplicate
    }

    for (auto it = mp.begin(); it != mp.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }

    int maxSeats = INT_MIN;
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        if (it->second > maxSeats) {
            maxSeats = it->second;
        }
    }

    cout << maxSeats << endl;
}
