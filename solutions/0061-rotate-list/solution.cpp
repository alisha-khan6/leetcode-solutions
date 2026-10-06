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
int size(ListNode* head){
    int count = 0 ;
    ListNode* temp = head ;
    while(temp != NULL){
        count++ ;
        temp = temp -> next ;
    }
    return count ;
}
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head -> next == NULL){
            return head ;
        }
        int n = size(head) ;
        k = k % n ;
        if(k == 0)
            return head ;
        int pos = n - k ;
        ListNode* temp = head ;
        for(int i = 1 ; i < pos ; i++){
            temp = temp -> next ;
        }
        ListNode* newhead = temp -> next ;
        temp -> next = NULL ;
        ListNode* tail = newhead ;
        while(tail -> next != NULL){
            tail = tail -> next ;
        }
        tail -> next = head ;
        return newhead ;
    }
};
