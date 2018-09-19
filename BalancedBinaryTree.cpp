 int height(TreeNode *root){
     if (root == NULL) return 0;
     return max(  height(root->left),  height(root->right) )  +1;

 }
class Solution {
public:
    bool isBalanced(TreeNode* root) 
    {
    int lh; /* for height of left subtree */
   int rh; /* for height of right subtree */  
  
   /* If tree is empty then return true */
   if(root == NULL) 
    return 1;  
  
   /* Get the height of left and right sub trees */
   lh = height(root->left); 
   rh = height(root->right); 
  
   if( abs(lh-rh) <= 1 && 
       isBalanced(root->left) && 
       isBalanced(root->right) )
     return 1; 
  
   /* If we reach here then tree is not height-balanced */
   return 0; 
    }
};
