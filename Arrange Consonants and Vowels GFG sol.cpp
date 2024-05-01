class Solution {
  private:
    bool isVowel(char ch)
    {
        return (ch=='a') || (ch=='e') || (ch=='i') || (ch=='o') || (ch=='u');
    }
    void insertAtTail(Node* &tail,Node* curr)
    {
        tail->next=curr;
        tail=tail->next;
    }
  public:
    struct Node* arrangeCV(Node* head) {
        if(!head || !head->next)
        {
            return head;
        }
        Node* vowel=new Node('X');
        Node* conso=new Node('X');
        Node* temp1=vowel;
        Node* temp2=conso;
        
        Node* curr = head;
        while(curr != NULL)
        {
            if(isVowel(curr->data))
            {
                insertAtTail(temp1,curr);
            }
            else
            {
                insertAtTail(temp2,curr);
            }
            curr=curr->next;
        }
        temp2->next=NULL;
        temp1->next=conso->next;
        Node* res=vowel->next;
        delete vowel;
        delete conso;
        return res;
    }
};
