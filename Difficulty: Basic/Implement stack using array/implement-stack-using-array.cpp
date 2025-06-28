// Function to push an integer into the stack.

// class MyStack
// {
// private:
//     int arr[1000];
//     int top;
// public:
//     MyStack(){top=-1;}
//     int pop();
//     void push(int);
// };


void MyStack ::push(int x) {
    // Your Code
    top++;
    arr[top]=x;
}

// Function to remove an item from top of the stack.
int MyStack ::pop() {
    // Your Code
    while(top != -1){
        int val = arr[top];
        top--;
        return val;
    }
    return -1;
}