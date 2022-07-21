/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> finalResult;
        
        vector<int> tempResult;
        queue<TreeNode*> que;
        int expectedSize = 0;
        TreeNode* tempNode;
        
        
        if(root == nullptr) {
            return finalResult;
        }
        
        
        que.push(root);

        while(que.empty() == false) {
            if(que.size() == expectedSize) {
                finalResult.push_back(tempResult);
                tempResult = {};
                expectedSize = 0;
            }
            
            tempNode = que.front();
            que.pop();
            tempResult.push_back(tempNode->val);
            if(tempNode->left != nullptr) {
                que.push(tempNode->left);
                expectedSize += 1;
            }
            if(tempNode->right != nullptr) {
                que.push(tempNode->right);
                expectedSize += 1;
            }
        }
        
        finalResult.push_back(tempResult);
        
        return finalResult;
    }
};