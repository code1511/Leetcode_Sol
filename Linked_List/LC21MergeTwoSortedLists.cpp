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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode*new_head;
        if(!l1)
            return l2;
        if(!l2)
            return l1;
        if(l1->val <= l2->val){
            new_head=l1;
            new_head->next=mergeTwoLists(l1->next,l2);
        }else{
            new_head=l2;
             new_head->next=mergeTwoLists(l1,l2->next);
        }
       return new_head;
    }
};
