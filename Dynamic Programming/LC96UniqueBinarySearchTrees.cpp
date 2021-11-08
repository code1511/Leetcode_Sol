//link https://leetcode.com/problems/unique-binary-search-trees/discuss/1565931/C%2B%2B-Explained-oror-DP-oror-faster-than-100.00-of-C%2B%2B-online-submissions
/*

1) each node will be at root node at ONCE because we are checking each possible binary search tree

2) condition for binary search tree
left node value will be less than root node value
right node value will be greater than root node value

3) finding relations
  a) for each root node we will be checking all possible unique left subtree
  b) for each root node we will be checking all possible unique right subtree
  
4) For the lower values we will be computing again and again that means we are doing recomputation 

5) Think  recursively. 

6) Finding the base case
    as the unique values ranges from 1 to n therefore 
    if(n==1)
      we can form only one BST
       

*/

class Solution {
public:
     int trees(int lo, int hi) {
        if (lo >= hi) return 1;
        int total = 0;
        for (int i = lo; i <= hi; i++)
            total += trees(lo, i - 1) * trees(i + 1, hi);
        return total;
    }
    int numTrees(int n) {
         return trees(1, n);
    }
};

//dp soln

class Solution {
public:
    int dp[20][20];
     int trees(int low, int high) {
       if(low >= high) return 1;
        if(dp[low][high] != 0) return dp[low][high];
        int ans = 0;
        for(int root = low; root <= high; root++){
            ans += trees(low, root-1)*trees(root+1, high);
        }
         dp[low][high] = ans;
        return dp[low][high];
    }
    int numTrees(int n) {
         return trees(1, n);
    }
};
