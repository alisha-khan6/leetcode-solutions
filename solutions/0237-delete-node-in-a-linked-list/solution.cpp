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
    void deleteNode(ListNode* node) {
        ListNode* temp = node -> next ;
        node -> val = temp -> val ;
        node -> next = temp -> next ;
        delete temp ;
    }
};
// What we can do is : as head is not given we can just store address of next to the given node in temp . Then in given node we will store value of the next node it will become 4 1 1 9 , then what we will do we will point the given node to temp -> next ; and then delete the old node i.e is temp and it will become 4 1 9
