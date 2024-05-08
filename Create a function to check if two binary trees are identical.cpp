// Create a function to check if two binary trees are identical.

#include <iostream>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

bool areIdentical(TreeNode* root1, TreeNode* root2) {
    if (root1 == nullptr && root2 == nullptr)
        return true;

    if (root1 == nullptr || root2 == nullptr)
        return false;

    return (root1->val == root2->val) &&
           areIdentical(root1->left, root2->left) &&
           areIdentical(root1->right, root2->right);
}

int main() {
    // Example 1
    TreeNode* root1 = new TreeNode(1);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(3);

    TreeNode* root2 = new TreeNode(1);
    root2->left = new TreeNode(2);
    root2->right = new TreeNode(3);

    std::cout << "Example 1: Trees are " << (areIdentical(root1, root2) ? "identical." : "not identical.") << std::endl;

    // Example 2
    TreeNode* root3 = new TreeNode(1);
    root3->left = new TreeNode(2);
    root3->right = new TreeNode(3);

    TreeNode* root4 = new TreeNode(1);
    root4->left = new TreeNode(2);
    root4->right = new TreeNode(4);

    std::cout << "Example 2: Trees are " << (areIdentical(root3, root4) ? "identical." : "not identical.") << std::endl;

    return 0;
}
