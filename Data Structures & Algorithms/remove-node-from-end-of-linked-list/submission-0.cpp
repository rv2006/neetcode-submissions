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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL)return head;
        else if(head->next==NULL)return NULL;
        int size=1;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            temp=temp->next;
            size++;
        }
        int k=size-n-1;
        temp=head;
        if(k<=0)
        {
            head=head->next;
            return head;
        }
        for(int i=0;i<k-1;i++)
        {
            temp=temp->next;
        }
        ListNode* t=(temp->next!=NULL)?temp->next:NULL;
        temp->next=(t!=NULL && t->next!=NULL)?(t->next):NULL;
        return head;
    }
};