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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head ;
        int count = 0 ;
        while(temp != NULL){
            temp = temp -> next ;
            count++ ;
        }
        int mid = count / 2 ;
    ListNode* temp_1 = head ;
    int count_1 = 0 ;
    while(count_1 < mid){
        temp_1 = temp_1 -> next ;
        count_1++ ;
    }
    return temp_1 ;
    }
};
