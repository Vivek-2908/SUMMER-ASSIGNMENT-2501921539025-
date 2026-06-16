/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode*decrease=head;
        ListNode*increase=head;
        while(increase != NULL && increase->next != NULL){
            decrease=decrease->next;
            increase=increase->next->next;
            if (decrease==increase){
                return true;
            }
        }
        return false;    

        
    }
};
