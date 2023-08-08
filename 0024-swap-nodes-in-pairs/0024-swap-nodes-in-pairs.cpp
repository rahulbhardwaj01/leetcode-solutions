
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        // base case::
        if(head==NULL || head->next== NULL) {   //no need to swap then
            return head;
        }
        ListNode* second_head=head->next;
        // reversing the link bw 1st and 2nd node::
        head->next=swapPairs(second_head->next);
        second_head->next=head;
        return second_head;
    }
};