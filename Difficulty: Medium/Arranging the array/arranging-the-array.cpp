class Solution {
  public:
    void Rearrange(int arr[], int n) {
        // Your code goes here
        vector<int> pos;
        vector<int> neg;
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                pos.push_back(arr[i]);
            }else{
                neg.push_back(arr[i]);
            }
        }
        
        for(int i=0;i<neg.size();i++){
            arr[i] = neg[i];
        }
        for(int j=0;j<pos.size();j++){
            arr[neg.size()+j] = pos[j];
        }
    }
};