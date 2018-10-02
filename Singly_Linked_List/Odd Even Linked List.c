/*
Given a singly linked list, group all odd nodes together followed by the even nodes.
Please note here we are talking about the node number and not the value in the nodes.
You should try to do it in place. The program should run in O(1) space complexity and O(nodes) time complexity
*/

// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* oddEvenList(struct ListNode* head) {
    // input validation
    if (head == NULL || head->next == NULL)
        return head;
    
    struct ListNode *oddList, *evenList, *ptr, *evenHead;
    oddList = head;
    evenHead = head->next;
    evenList = evenHead;
    
    int flag = 1;
    ptr = head->next->next;
    while (ptr != NULL) {
        if (flag) {
            flag = 0;
            oddList->next = ptr;
            oddList = oddList->next;
        }
        else {
            flag = 1;
            evenList->next = ptr;
            evenList = evenList->next;
        }
        ptr = ptr->next;
    }
    
    evenList->next = NULL;
    oddList->next = evenHead;
    
    return head;
}