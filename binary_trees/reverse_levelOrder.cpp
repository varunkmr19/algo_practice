// Problem link -> https://leetcode.com/problems/binary-tree-level-order-traversal-ii
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> levelOrderBottom(TreeNode* root) {
  vector<vector<int>> ans;
  if(root != NULL) {
    queue<TreeNode*>q;
    q.push(root);
    stack<vector<int>>s;

    while(!q.empty()) {
      vector<int> level;
      int level_size = q.size();
      while(level_size > 0) {
        TreeNode *temp = q.front();
        q.pop();
        if(temp->left != NULL) q.push(temp->left);
        if(temp->right != NULL) q.push(temp->right);

        level.push_back(temp->val);
        level_size--;
      }
      s.push(level);
    }

    while(!s.empty()) {
      ans.push_back(s.top());
      s.pop();
    }
  }
  return ans;
}
