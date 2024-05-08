public:
    void preorderTraversal() {
        preorderTraversal(root);
        std::cout << std::endl;
    }

    void inorderTraversal() {
        inorderTraversal(root);
        std::cout << std::endl;
    }

    void postorderTraversal() {
        postorderTraversal(root);
        std::cout << std::endl;
    }

private:
    void preorderTraversal(TreeNode* node) {
        if (node == nullptr) {
            return;
        }
        std::cout << node->data << " ";
        preorderTraversal(node->left);
        preorderTraversal(node->right);
    }

    void postorderTraversal(TreeNode* node) {
        if (node == nullptr) {
            return;
        }
        postorderTraversal(node->left);
        postorderTraversal(node->right);
        std::cout << node->data << " ";
    }
