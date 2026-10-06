/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL)return false;
        ListNode* l1=head;
        ListNode* l2=head->next!=NULL && head->next->next!=NULL?head->next->next:NULL;
        if(l2==NULL)return false;
        while(l1!=NULL && l2!=NULL && l2->next!=NULL && l2->next->next!=NULL)
        {
            l1=l1->next;
            l2=l2->next->next;
            if(l1==l2)return true;
        }
        return false;
    }
};