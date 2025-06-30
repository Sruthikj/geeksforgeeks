class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        vector<int> v;
        while(!q.empty()){
            v.push_back(q.front());
            q.pop();
        }
        
        if(k > v.size()){
            for(int i=0;i<v.size();i++){
                q.push(v[i]);
            }
        }else if(k == v.size()){
            for(int i=v.size()-1;i>=0;i--){
                q.push(v[i]);
            }
        }else{
            for(int i=k-1;i>=0;i--){
                q.push(v[i]);
            }
            for(int i=k;i<v.size();i++){
                q.push(v[i]);
            }
        }
        
        return q;
    }
};