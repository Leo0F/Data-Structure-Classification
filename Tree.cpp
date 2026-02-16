#include <iostream>
using namespace std;

struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

class BST {
    TreeNode* root;
public:
    BST() { root = NULL; }
    void insert(int val) { root = insertRec(root, val); }
    void inorder() { inorderRec(root); cout << endl; }
private:
    TreeNode* insertRec(TreeNode* node, int val) {
        if (node == NULL) return new TreeNode(val);
        if (val < node->data)
            node->left = insertRec(node->left, val);
        else
            node->right = insertRec(node->right, val);
        return node;
    }
    void inorderRec(TreeNode* node) {
        if (node) {
            inorderRec(node->left);
            cout << node->data << " ";
            inorderRec(node->right);
        }
    }
};

int main() {
    BST tree;
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.inorder();  // prints: 30 50 70
    return 0;
}