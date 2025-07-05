class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
        vector<int> v;
        int smallest = INT_MAX;
        int second = INT_MAX;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]<smallest){
                second = smallest;
                smallest = arr[i];
            }else if(arr[i]>smallest && arr[i]<second){
                second = arr[i];
            }
        }
        
        if(second == INT_MAX){
            v.push_back(-1);
            return v;
        }else{
            v.push_back(smallest);
            v.push_back(second);
            return v;
        }
    }
};