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
    void reorderList(ListNode* head) {
        ListNode* temp = head;
        int k = 0;
        while (temp->next != NULL) {
            temp = temp->next;
            k++;
        }
        k++;
        int n1, n2;
        if (k % 2 == 0) {
            n1 = k / 2;
            n2 = k / 2;
        } else {
            n1 = (k / 2) + 1;
            n2 = k / 2;
        }
        temp = head;
        int c = 0;
        while (c < n1 - 1) {
            temp = temp->next;
            c++;
        }
        ListNode* p1 = head;
        ListNode* p2 = temp->next;
        temp->next=NULL;
        ListNode* next = NULL;
        ListNode* prev = NULL;

        for (int i = 0; i < n2; i++) {
            
            next = p2->next;
            p2->next = prev;
            prev = p2;
            p2 = next;
        }
        p2 = prev;
        while (p2 != NULL) {
            ListNode* n = p1->next;
            ListNode* q = (p2->next != NULL) ? p2->next : NULL;
            p1->next = p2;
            p2->next = n;
            p1 = n;
            p2 = q;
        }
    }
};