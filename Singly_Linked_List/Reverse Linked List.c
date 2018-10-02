// Reverse a linked list from position m to n. Do it in-place and in one-pass.
// For example:
// Given 1->2->3->4->5->NULL, m = 2 and n = 4,
// return 1->4->3->2->5->NULL.

// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *(struct ListNode *head, int m, int n) {
	// i/p validation
	if (head == NULL || head->next == NULL || m >= n)
		return head;

	ListNode *ptr = head, *lptr = NULL, *rptr = NULL;
	for (int i = 1; ptr != NULL && i < m; ++i)
	{
		lptr = ptr;
		ptr = ptr->next;
	}
	rptr = ptr->next;

	struct ListNode *tmp = lptr;
	for (int i = m; rptr != NULL && i < n; ++i)
	{
		lptr = ptr;
		ptr = rptr;
		rptr = rptr->next;

		ptr->next = lptr;
	}
	if (tmp && tmp->next) {
		tmp->next->next = rptr;
		tmp->next = ptr;
	}
	else {
		head->next = rptr;
		head = ptr;
	}

	return head;
}