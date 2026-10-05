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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)return head;
        ListNode* prev=new ListNode();
        ListNode* n=new ListNode();
        n=head->next;
        prev=head;
        head->next=NULL;
        while(n!=NULL)
        {
            head=n;
            n=head->next!=NULL?head->next:NULL;
            head->next=prev;
            prev=head;
        }
        return head;
    }
};