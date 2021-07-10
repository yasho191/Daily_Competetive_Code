#include<iostream>
#include<vector>
#include<queue>
using namespace std;

/************************************************************

    Following is the TreeNode class structure:

    template <typename T>

    class TreeNode {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
template <typename T>
class TreeNode {
public:
    T val;
    TreeNode<T> *left;
    TreeNode<T> *right;
    TreeNode(T val) {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

vector<int> reverseLevelOrder(TreeNode<int> *root){
    // Write your code here.
    queue<TreeNode<int> *> q;
    vector<int> order;
    
    if (root == NULL)
        return order;
    
    q.push(root);
    
    while(q.empty() == false){
        TreeNode<int> * temp;
        temp = q.front();
        q.pop();
        order.insert(order.begin(), temp->val);
        if (temp->left != NULL)
            q.push(temp->left);
        if (temp->right != NULL)
            q.push(temp->right);
    }
    return order;
}