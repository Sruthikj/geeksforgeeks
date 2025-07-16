/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */
class Solution {
  public:
    // Function to return a list containing the postorder traversal of the tree.
    void printpostorder(Node* root , vector<int> &result){
        if(root == NULL){
            return;
        }
        printpostorder(root->left , result);
        printpostorder(root->right , result);
        result.push_back(root->data);
    }
    vector<int> postOrder(Node* root) {
        // Your code here
        vector<int> result;
        printpostorder(root , result);
        return result;
    }
};