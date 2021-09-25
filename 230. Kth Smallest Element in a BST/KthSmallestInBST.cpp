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
    int kthSmallest(TreeNode* root, int k) {
        // 1. parse all element and sotre
        // 2. sort the elements
        // 3. find kth element
        
        vector<int> elements;
        parse_recursive(root, &elements);
        sort(elements.begin(), elements.end());
        
        return elements[k-1];
        //cout<< elements.size();
        //return -1;
    }
    
    void parse_recursive(TreeNode* root, vector<int>* elements)
    {
        if(!root)
        {
            return;            
        }
        elements->push_back(root->val);
        parse_recursive(root->left, elements);
        parse_recursive(root->right, elements);        
    }
};