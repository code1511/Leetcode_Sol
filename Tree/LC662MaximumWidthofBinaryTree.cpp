//https://leetcode.com/problems/maximum-width-of-binary-tree/
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
    int max(int x,int y){
        return (x>y?x:y);
    }
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        queue<pair<TreeNode*,unsigned long long int>>q;
        q.push({root,0});
        int width=0;
        while(!q.empty()){
            unsigned long long int l=q.front().second;
            unsigned long long int r=0;
            int n=q.size();
            for(auto i=0;i<n;i++){
                pair<TreeNode*,unsigned long long int >ptr=q.front();
                q.pop();
                r=ptr.second;
                if(ptr.first->left){
                    q.push({ptr.first->left,2*r+1});
                }
                if(ptr.first->right){
                    q.push({ptr.first->right,2*r+2});
                }
            }
            width=max(width,(r-l+1));
        }
        return width;
    }
};
//https://leetcode.com/problems/maximum-width-of-binary-tree/discuss/1514554/Runtime%3A-0-ms-faster-than-100.00-of-C%2B%2B-online-submissions
