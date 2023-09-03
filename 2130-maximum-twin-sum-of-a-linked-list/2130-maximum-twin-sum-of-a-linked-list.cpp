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
    int pairSum(ListNode* head) {
        ListNode* curr = head;
        int length = 0;
        while(curr){
            length++;
            curr = curr->next;
        } 
        int n = length/2;
        vector<int>v(n,0);
        curr = head;
        int count = 0;
        bool flag = true;
        while(curr){
            if(flag && count<n){
                v[count]+=curr->val;
                count++;
            }
            else{
                v[count]+=curr->val;
                count--;
            }
            if(count==n){
                count--;
                flag = false;
            } 
            curr = curr->next;
        } 
        return *max_element(v.begin(),v.end());
    }
};