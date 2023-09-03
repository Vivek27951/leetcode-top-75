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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL) return NULL;
        if(head->next==NULL) return NULL;
        if(head->next->next==NULL){
            head->next = NULL;
            return head;
        }
        ListNode* slow = NULL;
        ListNode* fast = head;
        while(fast->next!=NULL){
            fast = fast->next;
            if(!slow) slow=head;
            else slow = slow->next;
            if(fast->next!=NULL)
                fast = fast->next;
        }
        slow->next = slow->next->next;
        return head;
    }
};