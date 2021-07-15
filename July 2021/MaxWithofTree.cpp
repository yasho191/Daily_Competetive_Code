#include<algorithm>
#include<queue>
#include<vector>
using namespace std;

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

int maxDepth(TreeNode<int> *node){
    if(node == NULL)
        return 0;
    else{
        int left = maxDepth(node->left);
        int right = maxDepth(node->right);
        
        if(left > right)
            return left+1;
        else return right+1;
    }
}
int getMaxWidth(TreeNode<int> *root)
{
    if(root == NULL)
        return 0;
    // Write your code here.
    int depth = maxDepth(root);
    //cout<<depth;
    vector<int> v;
    for(int i = 0; i < depth; i++){
        v.push_back(0);
    }
    
    int level = 0;
    queue<TreeNode<int> *> q;
    queue<int> l;
    TreeNode<int> *temp;
    q.push(root);
    l.push(level);
    v[level]++;
    
    while(q.empty() == false){
        temp = q.front();
        q.pop();
        level = l.front();
        l.pop();
        
        if(temp->left){
            q.push(temp->left);
            l.push(level+1);
            v[level+1]++;
        }
        if(temp->right){
            q.push(temp->right);
            l.push(level+1);
            v[level+1]++;
        }
        
    }
    
    vector<int>::iterator it = max_element(v.begin(), v.end());
    
    return *it;
}