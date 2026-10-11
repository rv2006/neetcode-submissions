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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *a, *b;
        a = head;
        ListNode *start, *end;
        for (int i = 1; i < left; i++) {
            a = a->next;
        }
        b = head;
        for (int i = 1; i < right; i++) {
            b = b->next;
        }
        if (a == b)
            return head;
        if (a == head && b->next == NULL) {
            ListNode *prev, *n;
            n = a->next;
            a->next = NULL;
            prev = a;
            while (n != NULL) {
                a = n;
                n = a->next != NULL ? a->next : NULL;
                a->next = prev;
                prev = a;
            }
            return a;
        }
        start = head;
        while (a != head && (start != a && start->next != a)) {
            start = start->next;
        }
        if(a==head)
        {   
            start=NULL;
            head=b;
        }
        else if(a!=head)start->next = b;
        cout << a->val << " " << b->val;
        end = (b->next != NULL) ? b->next : NULL;
        
        ListNode *prev, *n;
        n = a->next;
        a->next = end;
        prev = a;
        a = n;

        for (int i = left; i < right; i++) {
            cout<<endl<<a->val;
            n = a->next;
            a->next = prev;
            prev = a;
            a = n;
        }
        return head;
    }
};