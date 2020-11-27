// Problem Link -> https://leetcode.com/problems/binary-tree-level-order-traversal

#include<bits/stdc++.h>
using namespace std;

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

vector<vector<int>> levelOrder(TreeNode *root) {
  vector<vector<int>> ans;
  if(root!=NULL) {
    queue<TreeNode*>q;
    q.push(root);

    while(!q.empty()) {
      vector<int>level;
      int level_size = q.size();
      TreeNode *temp = q.front();
      level.push_back(temp->val);
      q.pop();

      while(level_size > 0) {
        //Enqueue child elements
        if(q.left != NULL) q.push(temp->left);
        if(q.right != NULL) q.push(temp->right);
        level_size--;
      }
      ans.push_back(level);
    }
  }
  return ans;
}
