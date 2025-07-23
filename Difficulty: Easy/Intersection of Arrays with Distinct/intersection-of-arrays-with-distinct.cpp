// User function template for C++

// Function to return the count of the number of elements in
// the intersection of two arrays.

class Solution {
  public:
    int numberofElementsInIntersection(vector<int> &a, vector<int> &b) {
        // Your code goes here
        int count = 0;
        set<int> s1(a.begin(),a.end());
        set<int> s2;
        for(int j=0;j<b.size();j++){
            if(s1.count(b[j])==true){
                count++;
            }
        }
        return count;
    }
};