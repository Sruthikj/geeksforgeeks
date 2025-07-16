/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Function to return a list containing the level order traversal in spiral form.
class Solution {
  public:
  
    void traversal(Node* root , vector<int> &sum){
        if(root == NULL){
            return;
        }
        sum.push_back(root->data);
        traversal(root->left , sum);
        traversal(root->right , sum);
    }
    
    int sumBT(Node* root) {
        vector<int> sum;
        traversal(root , sum);
        int tsum = 0;
        for(int i=0;i<sum.size();i++){
            tsum = tsum + sum[i];
        }
        return tsum;
    }
};

