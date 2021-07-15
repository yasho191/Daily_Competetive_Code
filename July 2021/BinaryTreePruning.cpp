/************************************************************

    Following is the Tree node structure
	
	template <typename T>
    class TreeNode 
    {
        public : 
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) 
        {
            this -> val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include<iostream>
using namespace std;

template <typename T>
class TreeNode 
{
    public : 
    T val;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val) 
    {
        this -> val = val;
        left = NULL;
        right = NULL;
    }
};


TreeNode<int>* binaryTreePruning(TreeNode<int>* root)
{
	// Write your code here
    if(!root)
        return NULL;
    root->left = binaryTreePruning(root->left);
    root->right = binaryTreePruning(root->right);
    
    if(!root->left && !root->right && !root->val){
        return NULL;
    }
    return root;
}