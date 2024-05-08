// Write an algorithm to find the height of a binary tree.

#include <iostream>
#include <algorithm>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int getHeight(TreeNode* root) {
    if (root == nullptr)
        return 0;

    return 1 + std::max(getHeight(root->left), getHeight(root->right));
}

int main() {
    // Example
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);
    root->right->right->left = new TreeNode(7);

    std::cout << "Height of the binary tree: " << getHeight(root) << std::endl;

    return 0;
}
