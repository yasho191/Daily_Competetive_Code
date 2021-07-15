/*
    Following is the Binary Tree node structure:
    
    class BinaryTreeNode {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if(left) 
                delete left;
            if(right) 
                delete right;
        }
    };
*/
#include<iostream>
#include<vector>
using namespace std;
vector<int> v;

template <class T>
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
    
    ~BinaryTreeNode() {
        if(left) 
            delete left;
        if(right) 
            delete right;
    }
};

void mirrorBTree(BinaryTreeNode<int>* root){
    if(root == NULL)
        return;
    else{
        mirrorBTree(root->left);
        mirrorBTree(root->right);
        
        BinaryTreeNode<int>* temp;
        temp = root->left;
        root->left = root->right;
        root->right = temp;
    }
}

void inorder(BinaryTreeNode<int>* root){
    if(root == NULL)
        return;
    inorder(root->left);
    v.push_back(root->data);
    inorder(root->right);
}

bool isSymmetric(BinaryTreeNode<int>* root)
{
    // Write your code here.
    inorder(root);
    vector<int> v1(v.begin(), v.end());
    
    mirrorBTree(root);
    inorder(root);
    cout<<endl;
    vector<int> v2(v.begin()+v1.size(), v.end());
    
    if(v1==v2)
    	return 1;
    return 0;
}