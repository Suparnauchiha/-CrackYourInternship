class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int N) {
        if (head == NULL) {
        return NULL;
    }
    int cnt = 0;
    ListNode* temp = head;

    while (temp != NULL) {
        cnt++;
        temp = temp->next;
    }

    if (cnt == N) {
        ListNode* newhead = head->next;
        delete (head);
        return newhead;
    }

    int res = cnt - N;
    temp = head;

    while (temp != NULL) {
        
        if (res == 1) {
            break;
        }
        res--;
        temp = temp->next;
    }    
    ListNode* delNode = temp->next;
    temp->next = temp->next->next;
    delete (delNode);
    return head;
    }
};
