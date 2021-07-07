#include<iostream>
#include<vector>
#include "stdc++.h"

using namespace std;
/******************************************************************

Structure of TreeNode

class TreeNode {
	TreeNode<T>** children;
	int childCount;

	public:
	T data;

	TreeNode(T data);	// Constructor
	int numChildren();
	void addChild(TreeNode<T>* child);
	TreeNode<T>* getChild(int index);
	void setChild(int index, TreeNode<T>* child);
};

*******************************************************************/
template<class T>
class TreeNode {
	TreeNode<T>** children;
	int childCount;

	public:
	T data;

	TreeNode(T data);	// Constructor
	int numChildren();
	void addChild(TreeNode<T>* child);
	TreeNode<T>* getChild(int index);
	void setChild(int index, TreeNode<T>* child);
};

int getParent(TreeNode<int>* root, int N){

    TreeNode<int>* temp, *curr;
    vector<TreeNode<int>*> s;
    vector<TreeNode<int>*>::iterator it;
    vector<int> v;

    s.push_back(root);
    int flag = 0;
    
    while(true){
        it = s.begin();
        temp = s[0];
        s.erase(it);
        
        v.push_back(temp->data);
        if(temp->data == N)
            break;
        
        int x = temp->numChildren();
        for(int i = 0; i < x; i++){
            curr = temp->getChild(i);
            s.push_back(temp->getChild(i));
            if (curr->data == N){
                flag = 1;
            	break;
            }
                
        }
        if (flag == 1)
            break;
    }

    if(flag==1)
    	v.push_back(curr->data);
    else
        v.push_back(temp->data);
    
    return v[v.size()-2];
    
}

vector<int> getPath(TreeNode<int>* root, int N){
    vector<int> v;
    int y = N;
    
    v.push_back(N);
    while(true){
        if(y == root->data)
            break;
        int x = getParent(root, y);
        y = x;
        v.push_back(y);
    }
    return v;
}

vector<int> findPath(TreeNode<int>* root, int N1, int N2) {
    // Write your code here
    vector<int> v1, v2, res;
    
    v1 = getPath(root, N1);
    v2 = getPath(root, N2);
    
    
    vector<int>::iterator it;
    int k, j;
    for(int i = 0; i < v1.size(); i++){
        it = find(v2.begin(), v2.end(), v1[i]);
        if(it != v2.end()){
            j = it - v2.begin();
            k = i;
            break;
        }
    }
    
    for(int i = 0; i < k; i++){
        res.push_back(v1[i]);
    }
    
    for(int i = j; i >= 0; i--){
        res.push_back(v2[i]);
    }
    
    return res;
}