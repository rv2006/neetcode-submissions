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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int,vector<int>,greater<int>> pq;
        if(lists.size()==0)return NULL;
        for(int i=0;i<lists.size();i++)
        {
            while(lists[i]!=NULL)
            {
                pq.push(lists[i]->val);
                lists[i]=lists[i]->next;
            }
        }
        if(pq.empty())return NULL;
        ListNode* l=new ListNode();
        ListNode* t=l;
        while(!pq.empty())
        {
            l->val=pq.top();
            pq.pop();
            l->next=!pq.empty()?new ListNode():NULL;
            l=(l->next!=NULL)?l->next:t;
        }
        return l;
    }
};