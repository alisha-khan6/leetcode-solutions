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
    ListNode* swapPairs(ListNode* head) {
// Base case: if less than 2 nodes, no swap needed
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        
        ListNode* first = head;
        ListNode* second = head->next;
        
        // Recursive step: swap the rest of the list
        first->next = swapPairs(second->next);
        second->next = first;
        
        // New head of this pair is the second node
        return second;
    }
};
