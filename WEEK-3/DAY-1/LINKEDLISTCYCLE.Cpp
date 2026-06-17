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
