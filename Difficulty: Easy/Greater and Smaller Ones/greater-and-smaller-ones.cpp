class Geeks {
  public:
    static void greaterKSorted(vector<int>& arr, int k) {
        set<int> s1;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=k){
                s1.insert(arr[i]);
            }
        }
        if(s1.size()>0){
            for(auto itr=s1.begin();itr!=s1.end();itr++){
                cout<<*(itr)<<" ";
            }
        }else{
            cout<<-1;
        }
    }

    static void smallerKSorted(vector<int>& arr, int k) {
        set<int> s2;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(arr[i]<k){
                s2.insert(arr[i]);
            }
        }
        if(s2.size()>0){
            for(auto itr=s2.begin();itr!=s2.end();itr++){
                cout<<*(itr)<<" ";
            }
        }else{
            cout<<-1;
        }
    }
};