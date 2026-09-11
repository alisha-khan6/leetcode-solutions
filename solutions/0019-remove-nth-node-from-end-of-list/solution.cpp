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
class Solution{
public:
    ListNode* removeNthFromEnd(ListNode* head, int n){
    ListNode* temp_1 = head ;
    int count_1 = 0 ;
    while(temp_1 != NULL){
        temp_1 = temp_1 -> next ;
        count_1++ ;
    }
    int a = (count_1 - n) + 1 ;  
    ListNode* curr = head ;
    ListNode* prev = nullptr ;
    int count = 1 ;
    if(a == 1){
        ListNode* temp = head ;
        head = head -> next ;
        temp -> next = nullptr ;
        delete temp ;
    }else{
    while(count < a){
        prev = curr ;
        curr = curr -> next ;
        count++ ;
    }
    prev -> next = curr -> next ;
    curr -> next = nullptr ;
    delete curr ;
    }
    return head ;
    }
};
