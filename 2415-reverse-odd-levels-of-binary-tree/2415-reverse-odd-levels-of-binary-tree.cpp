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
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*> q,p;//queue p store nodes of odd level
        q.push(root);
        int count = 0;
        stack<int> s;//stack used to store the value of the node at odd level
        while(!q.empty())
        {
            int len = q.size();
            while(len--)
            {
                TreeNode* temp = q.front();
                q.pop();
                if(count%2)
                {
                    s.push(temp->val);
                    p.push(temp);
                }
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);    
            }
            if(count%2)
            {
                while(!p.empty() && !s.empty()) //this is where we reversed the values front of queue p is the leftmost node and top of stack s is the value of rightmost node's 
                {
                    p.front()->val = s.top();
                    s.pop();
                    p.pop();
                }
            }
            count++;
        }
        return root;
    }
};