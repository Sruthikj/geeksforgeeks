// User function template for C++
class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        // code here
        sort(arr.begin(),arr.end());
        vector<int> v;
        if(arr.size()==1){
            return v;
        }
        int closest = INT_MAX;
        int l = 0;
        int r = arr.size()-1;
        int p1,p2;
        
        while(l<r){
            
            int ans = arr[l]+arr[r];
            int diff = abs(target - ans);
            
            if(diff < closest){
                closest = diff;
                p1 = arr[l];
                p2 = arr[r];
            } 
            
            if(ans==target){
                l++;
                r--;
            }
            else if(ans<target){
                l++;
            }else{
                r--;
            }
        }
        
        if(p1<p2){
            v.push_back(p1);
            v.push_back(p2);
        }else if(p1>p2){
            v.push_back(p2);
            v.push_back(p1);
        }else{
            v.push_back(p1);
            v.push_back(p2);
        }
        return v;
    }
};