// Given a list, rotate the list to the right by k places, where k is non-negative.
// Example:
// Given 1->2->3->4->5->NULL and k = 2,
// return 4->5->1->2->3->NULL.

// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* rotateRight(struct ListNode* head, int k) {
    if (!head)
        return head;
    
    struct ListNode *ptr, *rptr;
    int n = 0;
    ptr = head;
    while(ptr) {
        ++n;
        ptr = ptr->next;
    }
    
    k %= n;
    ptr = head;
    while(k--)
        ptr = ptr->next;
    
    rptr = head;
    while(ptr->next) {
        ptr = ptr->next;
        rptr = rptr->next;
    }
    ptr->next = head;
    head = rptr->next;
    rptr->next = NULL;
    
    return head;
}