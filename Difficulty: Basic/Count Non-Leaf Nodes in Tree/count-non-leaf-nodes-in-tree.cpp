/*Structure of the node of the tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// you are required to complete this function
// the function should return the count of Non-Leaf Nodes
class Solution {
  public:
  
  void traversal(Node* root , int &count){
        if(root == NULL){
            return;
        }
        if(root->left != NULL || root->right != NULL){
            count++;
        }
        traversal(root->left , count);
        traversal(root->right , count);
    }
    
    int countNonLeafNodes(Node* root) {
        // Code here
        int count = 0;
        traversal(root , count);
        return count;
    }
};