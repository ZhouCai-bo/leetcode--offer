/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        auto root = makeNode(preorder, 0, inorder, 0, inorder.size() - 1);
        return root;
    }

    TreeNode *makeNode(vector<int> &preorder, int first, vector<int> &inorder, int left, int right){
        if(left > right)
            return nullptr;
        TreeNode *temp = new TreeNode(preorder[first]);
        int leftSize = findPos(inorder, preorder[first]) - left;
        int rightSize = right - left - leftSize;
        temp->left = makeNode(preorder, first + 1, inorder, left, leftSize + left - 1);
        temp->right = makeNode(preorder, first + leftSize + 1, inorder, leftSize + left + 1, right);
        return temp;
    }

    int findPos(vector<int> &vec, int value){
        for(int i=0; i<vec.size(); i++)
            if(vec[i] == value)
                return i;
        return -1;
    }
};

