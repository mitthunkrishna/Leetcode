//Just trying to create a extra node at the begining of the linkedlist so that i can do the link very easily and have a previous node for my convinience...
class Solution {
public:
    ListNode* swapPairs(ListNode* head){
        ListNode* temp=new ListNode(-1);//creating a extra node to have it as previous node of head
        ListNode *prev=temp,*curr;
        if(head==NULL || head->next==NULL) return head;
        prev=temp;
        curr=head;
        while(curr && curr->next){
            prev->next=curr->next;
            prev=prev->next;
            curr->next=prev->next;
            prev->next=curr;
            prev=curr;
            curr=curr->next;  
        }
        return temp->next; //Ignore the already created node
    }
};
