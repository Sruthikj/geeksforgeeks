class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n = arr.size();
        d = d % n;
        
        int s = 0;
        int e = n-1;
        while(s<e){
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
        
        int s1 = 0;
        int e1 = n-d-1;
        while(s1<e1){
            swap(arr[s1],arr[e1]);
            s1++;
            e1--;
        }
        
        int s2 = n-d;
        int e2 = n-1;
        while(s2<e2){
            swap(arr[s2],arr[e2]);
            s2++;
            e2--;
        }
    }
};