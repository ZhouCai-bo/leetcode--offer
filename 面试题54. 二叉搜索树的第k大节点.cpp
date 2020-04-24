class Solution {
public:
	int res = -1;
	int kthLargest(TreeNode* root, int k) {
		int index = 0;
        recurse(root, index, k);
        return res;
	}
	void recurse(TreeNode *node, int &index, int k)
	{
		if (!node || res != -1)
			return;
		recurse(node->right, index, k);
		index++;
        if (index == k)
		{
			res = node->val;
			return;
		}
		recurse(node->left, index, k);
	}
};
