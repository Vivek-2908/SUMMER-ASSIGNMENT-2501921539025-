class Solution {
public:
 ListNode* reverseList(ListNode* head) {
        ListNode* back = NULL;
        ListNode* present = head;

        while (present != NULL) {
            ListNode* nextNode = present->next;
            present->next = back;
            back = present;
            present = nextNode;
        }

        return back;
    }
};

