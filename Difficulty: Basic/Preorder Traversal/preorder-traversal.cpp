/* A binary tree node has data, pointer to left child
   and a pointer to right child

/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
class Solution {
  public:

    // Function to return a list containing the preorder traversal of the tree.
    void printpreorder(Node* root , vector<int> &result) {
        // write code here
        if(root == NULL){
            return;
        }
        result.push_back(root->data);
        printpreorder(root->left , result);
        printpreorder(root->right , result);
    }
    
    vector<int> preorder(Node* root) {
        // write code here
        vector<int> result;
        printpreorder(root , result);
        return result;
    }
};

