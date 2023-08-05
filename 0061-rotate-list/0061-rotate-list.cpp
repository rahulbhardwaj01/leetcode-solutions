class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
       if(!head|| head->next==NULL)
           return head;
        int n = 0;
        ListNode* tail = head;
        while(tail->next){
            n++;
            tail = tail->next;
        }
        n++;
        k=k%n;
        if(k==0){
            return head;
        }
        tail->next = head;
        ListNode*temp=head;
        
        for(int i = 0; i < n-k-1; i++){
            temp = temp->next;
        }  
        ListNode*newhead = temp->next;
        temp->next = NULL;
        return newhead;
    }
};