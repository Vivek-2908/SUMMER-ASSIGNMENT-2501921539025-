class Solution {
public:
    ListNode* middleNode(ListNode* head) {
         ListNode* A = head;
        ListNode* B = head;

        while (B != NULL && B->next != NULL) {
            A = A->next;
            B= B->next->next;
        }

        return A;
    }
};
