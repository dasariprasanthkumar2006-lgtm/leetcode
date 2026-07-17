/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* findMax(struct TreeNode* root) {
    while (root->right != NULL)
        root = root->right;
    return root;
}

struct TreeNode* deleteNode(struct TreeNode* root, int key) {
    struct TreeNode* temp;

    if (root == NULL) {
        return NULL;
    }

    if (key < root->val) {
        root->left = deleteNode(root->left, key);
    }
    else if (key > root->val) {
        root->right = deleteNode(root->right, key);
    }
    else {
        // Node found

        // Case 1: No left child
        if (root->left == NULL) {
            temp = root;
            root = root->right;
            free(temp);
        }
        // Case 2: No right child
        else if (root->right == NULL) {
            temp = root;
            root = root->left;
            free(temp);
        }
        // Case 3: Two children
        else {
            temp = findMax(root->left);   // Inorder predecessor
            root->val = temp->val;
            root->left = deleteNode(root->left, temp->val);
        }
    }

    return root;
}