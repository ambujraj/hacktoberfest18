// Given a singly linked list, determine if it is a palindrome.
// Using stack/recursion
// Follow up:
// Could you do it in O(n) time and O(1) space

// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

int isPalindrome(struct ListNode* head) {
    if (head == NULL || head->next == NULL)
        return true;
    
    struct ListNode *lptr = head, *ptr = head->next->next, *rptr;
    
    // get mid node
    while (ptr && ptr->next) {
        lptr = lptr->next;
        ptr = ptr->next->next;
    }
    
    // reverse all nodes after mid node
    ptr = lptr->next;
    rptr = ptr->next;
    while (rptr != NULL) {
        ptr->next = lptr;
        
        lptr = ptr;
        ptr = rptr;
        rptr = rptr->next;
    }
    ptr->next = lptr;
    
    lptr = head;
    rptr = ptr;
    int flag = 1;
    while (lptr != rptr && lptr->next != rptr && rptr->next != lptr) {
        printf("%d %d\n", lptr->val, rptr->val);
        if (lptr->val != rptr->val) {
            flag = 0;
            break;
        }
        lptr = lptr->next;
        rptr = rptr->next;
    }
    printf("%d %d\n", lptr->val, rptr->val);
    if (lptr->val != rptr->val)
        flag = 0;
    
    return flag;
}