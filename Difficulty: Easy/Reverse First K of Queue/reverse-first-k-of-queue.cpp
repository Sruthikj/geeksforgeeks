class Solution {
  public:
    queue<int> modifyQueue(queue<int> &q, int k) {
        // code here
        vector<int> v;
        while(!q.empty()){
            v.push_back(q.front());
            q.pop();
        }
        for(int i=k-1;i>=0;i--){
            q.push(v[i]);
        }
        for(int i=k;i<v.size();i++){
            q.push(v[i]);
        }
        return q;
    }
};
