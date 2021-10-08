//Method one
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode*p=head;
        ListNode*q=head;
        int a=k-1;
        int l=0;
        while(p){
            l++,p=p->next;
        }
        int b=(l-k);

        p=head;
        while(a){
            p=p->next;
            a--;
        }
        while(b){
            q=q->next;
            b--;
        }
        swap(p->val,q->val);
        return head;
    }
};


//method two another approach
// slow fast pointer
// k from end = ans 2k+1 from start
