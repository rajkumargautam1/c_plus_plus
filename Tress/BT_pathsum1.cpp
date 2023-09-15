#include<iostream>

using namespace std;

class TreeNode {

public :

	int val;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int val) {
		this->val = val;
		this->left = NULL;
		this->right = NULL;
	}

};

bool hasPathSum(TreeNode* root, int targetSum) {

    // base case 
    if(root == NULL){
        return false;
    }
    if(root->left ==NULL and root->right == NULL){
        if(root->val == targetSum){
            return true;
        }
    }

    //recursive case 


    // check in the leftsubtree if there exists a rorot to leaf path sum upto targetsum-root->val

    if(hasPathSum(root->left, targetSum-root->val)){
        // you've found a root to leaf path in the given tree that sum up to targetsum
        return true;

    }
    // 2. recursive check int the rightsubtree if there exists a root- to-leaf path that sum up to the targetsum

    if (hasPathSum(root->right, targetSum-root->val)){
        return true;
    }
    return false;



}

// bool hasPathSum(TreeNode* root, int targetSum) {

// 	// base case
// 	if (root == NULL) {
// 		return false;
// 	}

// 	if (root->left == NULL and root->right == NULL) {
// 		if (root->val == targetSum) {
// 			return true;
// 		}
// 		return false;
// 	}

// 	// recursive case

// 	return hasPathSum(root->left, targetSum - root->val) or hasPathSum(root->right, targetSum - root->val);

// }

 
int main() {

	TreeNode* root = NULL;

	root = new TreeNode(5);

	root->left = new TreeNode(4);
	root->left->left = new TreeNode(11);
	root->left->left->left = new TreeNode(7);
	root->left->left->right = new TreeNode(2);

	root->right = new TreeNode(8);
	root->right->left = new TreeNode(13);
	root->right->right = new TreeNode(4);
	root->right->right->right = new TreeNode(1);

	int targetSum = 22;

	hasPathSum(root, targetSum) ? cout << "true" << endl :
	                                   cout << "false" << endl;

	return 0;
}