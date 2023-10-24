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
    vector<int> largestValues(TreeNode* root) {
      // Create a vector 
      vector<int>result;
      // Chech the pointer is null or not 
      if(root==NULL) return result;
       // Create a queue
      queue<TreeNode*>q;
      // insert the root value to the queue
      q.push(root);  
      // Check the condition jab tak mera queue empty nahin ho jata tab tak chalana padega 
      while(!q.empty())
      {
          int levelMax = INT_MIN;
          int levelSize = q.size();
          // Traversing the loop 
          for(int i = 0; i<levelSize; i++)
          {
              TreeNode* node = q.front();
              q.pop();
              // Finding out the maximum of left subtree Part 
              levelMax = max(levelMax, node->val);
              // Finding out the maximum of right subtree part
              
              if(node->left) q.push(node->left);
              if(node->right)q.push(node->right);

          }
          // Inserting the maxmimum value to the result  of both the left and right
          result.push_back(levelMax);

      }
      return result;
    }
};