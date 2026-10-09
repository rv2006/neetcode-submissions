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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int c=0;
        ListNode* l3=new ListNode();
        ListNode* temp=l3;
        while(l1!=NULL && l2!=NULL)
        {
            int a=l1->val+l2->val+c;
            l3->val=(a%10);
            c=0;
            if(a>=10)c=1;
            l3->next=(l1->next!=NULL || l2->next!=NULL)?(new ListNode()):NULL;
            l3=(l1->next!=NULL || l2->next!=NULL)?l3->next:l3;
            l2=l2->next!=NULL?l2->next:NULL;
            l1=l1->next!=NULL?l1->next:NULL;
        }
        while(l1!=NULL)
        {
            int a=l1->val+c;
            l3->val=a%10;
            c=0;
            if(a>=10)c=1;
            l3->next=(l1->next!=NULL)?new ListNode():NULL;
            l3=(l1->next!=NULL)?l3->next:l3;
            l1=l1->next!=NULL?l1->next:NULL;
        }
        while(l2!=NULL)
        {
            int a=l2->val+c;
            l3->val=a%10;
            c=0;
            if(a>=10)c=1;
            l3->next=(l2->next!=NULL)?new ListNode():NULL;
            l3=(l2->next!=NULL)?l3->next:l3;
            l2=l2->next!=NULL?l2->next:NULL;
        }
        if(c==1)
        {
            l3->next=new ListNode();
            l3=l3->next;
            l3->val=1;
            l3->next=NULL;
            
        }
        return temp;
    }
};