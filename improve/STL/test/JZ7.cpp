#include<iostream>
#include<string>
#include<stack>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

TreeNode* findRoot(vector<int>& pre,vector<int>& vin, int infront, int inback, int prefront, int preback){
    
    int i=infront;
    while(i<=inback){
        if(pre[prefront] == vin[i]) break;
        ++i;
    }
    TreeNode* root = new TreeNode(vin[i]);
    if(i>infront) root->left = findRoot(pre, vin, infront, i-1, prefront+1, prefront+i-infront);
    if(i<inback) root->right = findRoot(pre, vin, i+1, inback,  prefront+i-infront+1, preback);
    return root;
}
TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
    int front = 0, back = pre.size();
    if (!back) return nullptr;
    return findRoot(pre, vin, front, back-1, front, back-1);
}


int main(){
    vector<int> pre{1, 2, 3, 4, 5, 6, 7}, vin{3, 2, 4, 1, 6, 5, 7};
    TreeNode*root = reConstructBinaryTree(pre, vin);
    return 0;
}