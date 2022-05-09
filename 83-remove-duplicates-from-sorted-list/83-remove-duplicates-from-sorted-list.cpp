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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)return NULL;
        ListNode*l=head,*r=head->next;
        while(r!=NULL)
        {
            if(r->val==l->val&&r->next!=NULL)
            {
                ListNode*temp=r;
                r=r->next;
                l->next=r;
                delete temp;
            }
            else if(r->val==l->val&&r->next==NULL)
             {
                  ListNode*temp=r;
                   l->next=NULL;
                  // delete temp;
                   break;
             }
            else
            {
            r=r->next;
            l=l->next;
            }
        }
           
    return head;
        
    }
};