// Given a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list.
// For example,
// Given 1->2->3->3->4->4->5, return 1->2->5.
// Given 1->1->1->2->3, return 2->3.

// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *ptr, *parptr, *tptr;
    int delVal;
    parptr = NULL;
    ptr = head;
    while (ptr != NULL) {
        if (ptr->val == delVal || (ptr->next != NULL && ptr->val == ptr->next->val)) {
            delVal = ptr->val;
            
            tptr = ptr;
            ptr = ptr->next;
            if (parptr == NULL)
                head = head->next;
            else
                parptr->next = tptr->next;
            free(tptr);
        }
        else {
            parptr = ptr;
            ptr = ptr->next;
        }
    }
    
    return head;
}