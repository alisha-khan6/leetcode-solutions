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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       int a = 0 ; 
       ListNode* temp_1 = headA ;
       while(temp_1 != NULL){
        a++ ;
        temp_1 = temp_1 -> next ;
       }
       int b = 0 ;
       ListNode* temp_2 = headB ;
       while(temp_2 != NULL){
        b++ ;
        temp_2 = temp_2 -> next ;
       }
    ListNode* longer = NULL ;
    ListNode* shorter = NULL ;

    if(a > b){
        longer = headA ;
        shorter = headB ;
    }else{
        longer = headB ;
        shorter = headA ;
    }
       int pos ;
       if(a > b){
        pos = a - b ;
       }else{
        pos = b - a ;
       } 
       int c = 0 ;
       while(c < pos){
        longer = longer -> next ;
        c++ ;
       }
       while(longer != NULL && shorter != NULL){
       if(longer == shorter){
        return longer ;
       }else{
       longer = longer -> next ;
       shorter = shorter -> next ;}
       }
       return NULL ;
    }
};
