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
       ListNode *temp=head;
       stack<int>stk;
       while(temp!=NULL){
        stk.push(temp->val);
            temp=temp->next;
       }
    temp=head;
    while(temp!=NULL){
        temp->val=stk.top();
        temp=temp->next;
        stk.pop();
    }
    return head;
    }
};