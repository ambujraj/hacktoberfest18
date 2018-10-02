// Write a program to find the node at which the intersection of two singly linked lists begins.

// For example, the following two linked lists:
// A:          a1 → a2
//                    \
//                      c1 → c2 → c3
//                    /            
// B:     b1 → b2 → b3
// begin to intersect at node c1.

// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    int m = 0, n = 0;
    struct ListNode *ptrA = headA;
    struct ListNode *ptrB = headB;
    
    while (ptrA) {
        m++;
        ptrA = ptrA->next;
    }
    while (ptrB) {
        n++;
        ptrB = ptrB->next;
    }
    
    ptrA = headA;
    ptrB = headB;
    if (m >= n) {
        int tmp = m-n;
        while (tmp--) {
            ptrA = ptrA->next;
        }
    }
    else {
        int tmp = n-m;
        while (tmp--) {
            ptrB = ptrB->next;
        }
    }
    
    while (ptrB != ptrA) {
        ptrA = ptrA->next;
        ptrB = ptrB->next;
    }
    
    return ptrA;
}