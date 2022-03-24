#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
bool isSubStructure(TreeNode* A, TreeNode* B);
bool isSameTree(TreeNode* A, TreeNode* B);
int main(){

	return 0;
}
bool isSubStructure(TreeNode* A, TreeNode* B){
0    if (!A || !B)	return false;
    if (A->val == B->val)	return isSameTree(A, B) || isSubStructure(A->left, B) || isSubStructure(A->right, B);
    return isSubStructure(A->left, B) || isSubStructure(A->right, B);
}
bool isSameTree(TreeNode* A, TreeNode* B){
    if (!B)	return true;
    if (!A && B)	return false;
    if (A->val != B->val)	return false;
    return isSameTree(A->left, B->left) && isSameTree(A->right, B->right);
}
