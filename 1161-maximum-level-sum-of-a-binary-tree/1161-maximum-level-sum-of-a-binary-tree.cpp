/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> ans;

        q.push(root);
        q.push(NULL);
        vector<int> temp;
        while (!q.empty()) {

            TreeNode* front = q.front();
            q.pop();
            if (front == NULL) {
                ans.push_back(temp);
                temp.clear();
                if (!q.empty()) {
                    q.push(NULL);
                }
            } else {
                temp.push_back(front->val);
                if (front->left != NULL) {
                    q.push(front->left);
                }
                if (front->right != NULL) {
                    q.push(front->right);
                }
            }
        }

        int maxi = INT_MIN;
        int finalans = 0;
        for (int i = 0; i < ans.size(); i++) {
            int sum = 0;
            for (int j = 0; j < ans[i].size(); j++) {
                sum += ans[i][j];
            }
            if (sum > maxi) {
                maxi = sum;
                finalans = i;
            }
        }

        return finalans+1;
    }
};