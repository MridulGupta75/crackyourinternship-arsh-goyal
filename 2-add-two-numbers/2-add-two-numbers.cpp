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
      ListNode*l3=NULL;
      ListNode*l4=NULL;
        int c=0;
        while(l1!=NULL||l2!=NULL)
        {
            int x;
               ListNode*temp=new ListNode;
                if(l1!=NULL&&l2!=NULL)
                x=l1->val+l2->val+c;
               else if(l2==NULL&&l1!=NULL)
                 x=l1->val+c;
                else
                    x=l2->val+c;
                c=0;
                if(x>9)
                {
                    temp->val=(x%10);
                    c=x/10;
                }
                else
                    temp->val=x;
                if(l3==NULL)
                {
                    l3=l4=temp;
                }
                else
                {
                    l4->next=temp;
                    l4=temp;
                }
                l4->next=NULL;
                if(l1!=NULL)
                l1=l1->next;
                if(l2!=NULL)
                l2=l2->next;
        }
        if(c!=0)
        {
             ListNode*temp=new ListNode;
             temp->val=c;
             l4->next=temp;
             l4=temp;
             l4->next=NULL;
          
        }
        return(l3);
        
    }
};