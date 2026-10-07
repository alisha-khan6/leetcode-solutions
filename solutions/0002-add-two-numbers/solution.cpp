/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* curr1 = l1;
        ListNode* curr2 = l2;
        ListNode* prev1 = nullptr; // To track the tail of l1 if we need to append nodes
        int carry = 0;
        
        // Loop while there are digits left in either list, or a leftover carry
        while (curr1 != nullptr || curr2 != nullptr || carry > 0) {
            int sum = carry;
            
            if (curr1 != nullptr) {
                sum += curr1->val;
            }
            if (curr2 != nullptr) {
                sum += curr2->val;
                curr2 = curr2->next; // Move list 2 forward
            }
            
            carry = sum / 10; // Calculate new carry (0 or 1)
            int digit = sum % 10; // Calculate the digit to store
            
            if (curr1 != nullptr) {
                // Scenario A: l1 still has an existing node. Overwrite it!
                curr1->val = digit;
                prev1 = curr1;
                curr1 = curr1->next;
            } else {
                // Scenario B: l1 ran out of nodes, but l2 or carry still has data.
                // Create a new node and append it to the end of l1.
                ListNode* newNode = new ListNode(digit);
                prev1->next = newNode;
                prev1 = newNode;
            }
        }
        return l1 ;
    }
};
