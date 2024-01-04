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
    int getLength(ListNode* head)
    {
        ListNode*temp=head;
        int count=0;
        while(temp!=NULL)
        {
            temp=temp->next;
            count++;
        }
        return count;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       
       //if the list is empty or containing only one node
       if(head==NULL || head->next==NULL)
       {
           return NULL;
       }
       int length = getLength(head);

        ListNode*current=head;
        ListNode*prev=NULL;
        int count=0;
        int required=(length-n)+1;
        // if(n == length)
        // {
        //     return head;
        // }
        while(count<required)
        {
            prev=current;
            current=current->next;
            count++;
        }
        //now my current is pointing to the nth node

        prev->next=current->next;
        current->next=NULL;
        delete current;

        return head;




        



        
    }
};
