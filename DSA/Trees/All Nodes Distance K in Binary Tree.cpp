// Problem link - https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/
// Problem Statement - We are given a binary tree (with root node root), a target node, and an integer value K.
// Return a list of the values of all nodes that have a distance K from the target node.  The answer can be returned in any order.
// Input: root = [3,5,1,6,2,0,8,null,null,7,4], target = 5, K = 2

// Output: [7,4,1]

// Explanation: 
// The nodes that are a distance 2 from the target node (with value 5)
// have values 7, 4, and 1.


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
    unordered_map <TreeNode*, TreeNode*> Map;
    // Function to build references to all nodes
    void buildMap(TreeNode* curr, TreeNode* root)
    {
        if(!curr)
        return;
        Map[curr] = root;
        buildMap(curr->left,curr);
        buildMap(curr->right,curr);
    }
    
    // Function to traverse and store nodes in a vector at distance k
    void Traverse(TreeNode* curr, TreeNode* prev, int K, vector<int> & ans)
    {
        if(!curr)
            return;
        if(K==0)
        {
            ans.push_back(curr->val);
            return;
        }
        if(prev != Map[curr]){Traverse(Map[curr],curr,K-1,ans);}
        if(prev != curr->left){Traverse(curr->left,curr,K-1,ans);}
        if(prev != curr->right){Traverse(curr->right,curr,K-1,ans);}
        
    }
    
    // Caller function
    vector<int> distanceK(TreeNode* root, TreeNode* target, int K)
    {
        Map.clear();
        buildMap(root,NULL);
        vector<int> ans;
        Traverse(target,NULL,K,ans);
        return ans;
    }
        
   
};
