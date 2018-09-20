class Solution {
public:
    TreeNode* helper(vector<int> &num, int low, int high) {
        if (low > high) { // Done
            return NULL;
        }
        int mid = (low + high) / 2;
        TreeNode* node = new TreeNode(num[mid]);
        node->left = helper(num, low, mid - 1);
        node->right = helper(num, mid + 1, high);
        return node;
    }

    TreeNode *sortedArrayToBST(vector<int> &num) {
        if (num.size() == 0) return NULL;
        return helper(num, 0, ((int)num.size()) - 1);
    }
};