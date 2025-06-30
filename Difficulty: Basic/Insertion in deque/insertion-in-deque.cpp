class Solution {
  public:
    deque<int> dqInsertion(const vector<int>& arr) {
        // code here
        deque<int> dq;
        for(int i=0;i<arr.size();i++){
            dq.push_back(arr[i]);
        }
        return dq; 
    }
};