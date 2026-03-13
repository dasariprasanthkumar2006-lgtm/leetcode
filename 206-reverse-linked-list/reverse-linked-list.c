/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *prev = NULL;
    struct ListNode *cur = head;
    struct ListNode *fwd = NULL;

    while (cur != NULL) {
        fwd = cur->next;
        cur->next = prev;
        prev = cur;
        cur = fwd;
    }

    return prev;
}
