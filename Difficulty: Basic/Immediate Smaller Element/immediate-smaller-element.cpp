// User function template for C++
class Solution {
  public:
    void immediateSmaller(vector<int>& arr) {
        //  code here
        for(int i=0;i<arr.size();i++){
            if(i<arr.size()-1 && arr[i]>arr[i+1]){
                arr[i]=arr[i+1];
            }else if(i<arr.size()){
                arr[i]=-1;
            }else{
                arr[i]=-1;
            }
        }
    }
};