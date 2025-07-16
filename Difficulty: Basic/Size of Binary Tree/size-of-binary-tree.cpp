/*

Definition for Binary Tree Node
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
    
    void traversal(Node* node, vector<int> &v){
        if(node == NULL){
            return;
        }
        v.push_back(node->data);
        traversal(node->left,v);
        traversal(node->right,v);
    }
  
    int getSize(Node* node) {
        // code here
        vector<int> v;
        traversal(node,v);
        return v.size();
    }
};
