/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution {
  public:
    // Function to count the number of leaf nodes in a binary tree.
    
    void traversal(Node* root , int &count){
        if(root == NULL){
            return;
        }
        if(root->left == NULL && root->right == NULL){
            count++;
        }
        traversal(root->left , count);
        traversal(root->right , count);
    }
    
    int countLeaves(Node* root) {
        // write code here
        int count = 0;
        traversal(root , count);
        return count;
    }
};

