class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        ListNode *pre = NULL, *cur = head, *nex=cur->next;
        
        while(cur != NULL){
            cur->next = pre;
            pre = cur;
            cur = nex;
            if(nex!=NULL){
                nex=nex->next;
            }
            
        }
        
        return pre;
    }
};

// heree cant define nex outside the lop bcs curr is changing continuously:::