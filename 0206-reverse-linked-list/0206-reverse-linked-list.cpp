class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *pre = NULL, *cur = head, *nex;
        
        while(cur != NULL){
            nex = cur->next;
            cur->next = pre;
            pre = cur;
            cur = nex;
        }
        
        return pre;
    }
};

// heree cant define nex outside the lop bcs curr is changing continuously:::