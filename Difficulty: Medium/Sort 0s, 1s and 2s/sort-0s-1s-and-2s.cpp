class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        queue<int> q0;
        queue<int> q1;
        queue<int> q2;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                q0.push(arr[i]);
            }else if(arr[i]==1){
                q1.push(arr[i]);
            }else{
                q2.push(arr[i]);
            }
        }
        vector<int> v;
        while(!q0.empty()){
            v.push_back(q0.front());
            q0.pop();
        }
        while(!q1.empty()){
            v.push_back(q1.front());
            q1.pop();
        }
        while(!q2.empty()){
            v.push_back(q2.front());
            q2.pop();
        }
        for(int i=0;i<arr.size();i++){
            arr[i] = v[i];
        }
    }
};