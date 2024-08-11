class Solution {
    public:
     Node* flatten(Node* head) {
        Node* cur = head;
        Node* tail = head;
        stack<Node*> stack;
        while(cur != nullptr) {
            if(cur->child != nullptr) {
                Node* child = cur->child;
                if(cur->next != nullptr){ 
                    stack.push(cur->next);
                    cur->next->prev = nullptr; 
                }
                cur->next = child;
                child->prev = cur;
                cur->child = nullptr;
            }
            tail = cur;
            cur = cur->next;
        }
        while(!stack.empty()) {
            cur = stack.top();
            stack.pop();
            tail->next = cur;
            cur->prev = tail;
            while(cur != nullptr) {
                tail = cur;
                cur = cur->next;
            }
        }
        return head;
    }
};
