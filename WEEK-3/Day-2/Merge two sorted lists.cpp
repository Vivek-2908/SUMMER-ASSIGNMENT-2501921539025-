class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode intel;
        ListNode* core = &intel;

        while (list1 != NULL && list2 != NULL) {
            if (list1->val <= list2->val) {
                core->next = list1;
                list1 = list1->next;
            } else {
                core->next = list2;
                list2 = list2->next;
            }
            core = core->next;
        }

        if (list1 != NULL) {
            core->next = list1;
        } else {
            core->next = list2;
        }

        return intel.next;
    }
};
