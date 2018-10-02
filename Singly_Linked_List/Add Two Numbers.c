// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself.
// Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
// Output: 7 -> 0 -> 8

// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *ptr1 = l1, *ptr2 = l2;
    
    struct ListNode *head = NULL, *ptr3;
    int carry = 0;
    while (ptr1 != NULL || ptr2 != NULL || carry != 0) {
        int val;
        if (ptr1 == NULL && ptr2 == NULL) {
            val = carry;
        }
        else if (ptr1 == NULL) {
            val = ptr2->val + carry;
        }
        else if (ptr2 == NULL) {
            val = ptr1->val + carry;
        }
        else
            val = ptr1->val + ptr2->val + carry;
        
        struct ListNode *node = (struct ListNode *)malloc(sizeof(struct ListNode));
        node->val = (val % 10);
        node->next = NULL;
        carry = (val / 10);
        
        printf("%d", val);
        // We can add dummy node as head to remove this stupid condition
        // only change would be to return head->next instead of head
        if (head == NULL) {
            head = node;
            ptr3 = head;
        }
        else {
            ptr3->next = node;
            ptr3 = ptr3->next;
        }
        
        if (ptr1 != NULL)
            ptr1 = ptr1->next;
        if (ptr2 != NULL)
            ptr2 = ptr2->next;
    }
    
    return head;
}