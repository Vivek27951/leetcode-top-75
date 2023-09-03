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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL) return NULL;
        if(head->next==NULL) return head;
        ListNode* first = head;
        ListNode* second = head->next;
        while(second->next){
            ListNode* temp = second->next;
            second->next = first;
            first = second;
            second = temp;
        }
        second->next = first;
        head->next=NULL;
        return second;
    }
};