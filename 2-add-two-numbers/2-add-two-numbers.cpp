class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum = 0;
        ListNode result(0);
        ListNode *current = &result;

        while(l1 != NULL || l2 != NULL){
            if(l1 != NULL){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL){
                sum += l2->val;
                l2 = l2 -> next;
            }

            current->next = new ListNode(sum % 10);
            current = current->next;
            sum = sum / 10;
        }

        if(sum > 0){
            current->next = new ListNode(sum);
        }
        return result.next;
    }
};