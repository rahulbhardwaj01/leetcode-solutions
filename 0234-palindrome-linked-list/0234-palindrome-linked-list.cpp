class Solution {
public:
    ListNode* findMid(ListNode* head){
        ListNode* slow=head,*fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
            if(fast) fast=fast->next;
        }
        return slow;
    }
    ListNode* reverseList(ListNode* head){
        ListNode* prev=NULL,*curr=head,*temp=NULL;
        while(curr != NULL){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
        ListNode* h1=head;
        ListNode* mid = findMid(h1);
        ListNode* h2=reverseList(mid);
        while(h2!=NULL){
            if(h1->val != h2->val) return false;
            h1=h1->next;
            h2=h2->next;
        }
        return true;
    }
};