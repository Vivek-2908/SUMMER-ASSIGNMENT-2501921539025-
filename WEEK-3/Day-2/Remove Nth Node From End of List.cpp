class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode A(0);
        A.next = head;

        ListNode* fast =&A;
        ListNode* slow = &A;

        for (int i = 0; i <= n; i++) {
            fast = fast->next;
        }

        while (fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }

        slow->next = slow->next->next;

        return A.next;
    }
};
