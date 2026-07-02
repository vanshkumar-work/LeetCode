class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* head = l1;
        ListNode* prev1 = l1;
        ListNode* prev2 = l2;
        ListNode* last = NULL;

        int carry = 0;

        while (prev1 || prev2) {

            if (prev1 == NULL) {
                last->next = new ListNode(0);
                prev1 = last->next;
            }

            int sum = prev1->val + (prev2 ? prev2->val : 0) + carry;

            prev1->val = sum % 10;
            carry = sum / 10;

            last = prev1;
            prev1 = prev1->next;
            if (prev2) prev2 = prev2->next;
        }

        if (carry) {
            last->next = new ListNode(carry);
        }

        return head;
    }
};