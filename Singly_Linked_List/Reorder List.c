/*
    Given a singly linked list L: L0→L1→…→Ln-1→Ln,
    reorder it to: L0→Ln→L1→Ln-1→L2→Ln-2→…
    You must do this in-place without altering the nodes values.
*/

// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

void reorderList(struct ListNode* head) {
    struct ListNode* stack[100001];
    int top = 0;
    struct ListNode *ptr = head, *tptr = NULL;
    while(ptr) {
        stack[top++] = ptr;
        ptr = ptr->next;
    }
    
    ptr = head;
    int fromStack = 1;
    while (ptr) {
        if (fromStack) {
            tptr = ptr->next;
            if (stack[top-1] == ptr)
                break;
            ptr->next = stack[--top];
            fromStack = 0;
        }
        else {
            if (tptr == ptr)
                break;
            ptr->next = tptr;
            fromStack = 1;
        }
        ptr = ptr->next;
    }
    if (ptr) 
        ptr->next = NULL;
    
    return head;
}