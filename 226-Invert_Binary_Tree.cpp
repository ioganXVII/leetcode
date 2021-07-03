TreeNode* invertTree(TreeNode* root) {
        if(!root) return 0;
        else{
            TreeNode* temp;
            
            invertTree(root->left);
            invertTree(root->right);
            
            temp = root->left;
            root->left = root->right;
            root->right = temp;
        }
        
        return root;
}
