int sumExists(int arr[], int n, int sum) {
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] + arr[j] == sum){
                ans = 1;
                break;
            }
        }
    }
    return ans;
}