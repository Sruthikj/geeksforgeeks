// your task is to complete the function
// function should return true/false or 1/0
bool pairWiseConsecutive(stack<int> s) {
    // Code here
    bool ans = true;
    
    vector<int> v;
    if(s.size()%2!=0){
        s.pop();
    }
      
    if(s.size() == 0){
        return ans;
    }  
    
    while(!s.empty()){
        v.push_back(s.top());
        s.pop();
    }
    
    for(int i=0;i<v.size()-1;i+=2){
        if(abs(v[i]-v[i+1])!=1){
            ans = false;
            break;
        }
    }
    return ans;
}