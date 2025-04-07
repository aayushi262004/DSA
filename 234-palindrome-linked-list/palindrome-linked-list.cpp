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
    bool isPalindrome(ListNode* head) {
        ListNode*temp=head;
        stack<int>stk;
        while(temp->next!=NULL){
            stk.push(temp->val);
            temp=temp->next;
        }
        stk.push(temp->val);
        temp=head;
        while(temp->next!=NULL){
            if(temp->val!=stk.top()){
                return false;
            }
            stk.pop();
            temp=temp->next;
        }
        return true;
    }
};