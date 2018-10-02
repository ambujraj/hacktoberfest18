// Given a linked list, return the node where the cycle begins. If there is no cycle, return null.
// Variation to return the length of the cycle

// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *detectCycle(struct ListNode *head) {
    if (head == NULL || head->next == NULL)
        return NULL;

    struct ListNode *turtle = head;
    struct ListNode *hare = head;

    while (hare != NULL && hare->next != NULL) {
        turtle = turtle->next;
        hare = hare->next->next;
        
        if (turtle == hare)
            break;
    }

    if (hare != turtle)
        return NULL;

    // finding start point of cycle in LL
    hare = head;
    while (hare != turtle) {
        hare = hare->next;
        turtle = turtle->next;
    }

    return turtle;
}