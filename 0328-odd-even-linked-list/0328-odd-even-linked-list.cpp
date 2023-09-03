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

    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next || !head->next->next) return head;
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* odd_curr = head;
        ListNode* even_curr = head->next;
        int flag = true;
        ListNode* curr = even->next;
        while(curr){
            if(flag){
                odd_curr->next = curr;
                odd_curr = curr;
            }else{
                even_curr->next = curr;
                even_curr = curr;
            }
            flag=!flag;
            curr = curr->next;
        }
        if(flag) odd_curr->next = curr;
        else even_curr->next = curr;
        
        odd_curr->next = even;
        return odd;
            
    }
};