//SAME TREE
//Statement - Given the roots of two binary trees p and q, write a function to check if they are the same or not.
//Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

struct TreeNode {
    int val;            // The value stored in the node
    TreeNode *left;     // Pointer to the left child node
    TreeNode *right;    // Pointer to the right child node

    TreeNode() : val(0), left(nullptr), right(nullptr) {}                      // Default constructor
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}                 // Constructor with value
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}  // Constructor with value & children
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!p && !q) return true;
        if (!p || !q) return false;
        if (p->val != q->val) return false;
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
