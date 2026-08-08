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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == NULL || head -> next == NULL){
            return head ;
        }
        int count = 1 ;
        ListNode* before = NULL ;

        ListNode* temp = head ;
        while(count < left){
            before = temp ;
            temp = temp -> next ;
            count++ ;
        }
        int count_2 = 1 ;
        ListNode* temp_2 = head ;
        while(count_2 < right){
            temp_2 = temp_2 -> next ;
            count_2++ ;
        }
        ListNode* prev = NULL;
        ListNode* curr = temp;
        ListNode* forward = NULL;
        ListNode* after = temp_2->next;
        while(curr != after ){
            forward = curr -> next ;
            curr -> next = prev ;
            prev = curr ;
            curr = forward ;
        }
        temp->next = after;

        if(before != NULL)
            before->next = prev;
        else
            head = prev;

        return head;
    }
};
