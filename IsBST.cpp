struct Node {
    int data;
    Node* left;
    Node* right;
};

// This is not the fastest code on LeetCode
bool IsBST(Node* root, Node* left = nullptr, Node* right = nullptr) {
    // If either you traversed the whole tree and reached till the leaf node
    // Or the tree itself is NULL at the start
    if (nullptr == root) {
        return true;
    }

    // For the current Node check the condition for left Node
    if (nullptr != left && root->data < left->data) {
        return false;
    }

    // For the current Node check the condition for right Node
    if (nullptr != right && root->data > right->data) {
        return false;
    }

    // Now is the trick, pass on the recursion to the left and right subtree
    // For root's left subtree , there is no more left, and root is at right
    // For root's right subtree , there is no more right, and root is at left
    return IsBST(root->left, left, root) &&
           IsBST(root->right, root, right);
}