class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL|| head->next==NULL)
            return head;
        ListNode* next=head->next;
        if(head->val==next->val){
            return deleteDuplicates(next);
        }
        else{
            head->next = deleteDuplicates(next);
            return head;
        }
    }
};
