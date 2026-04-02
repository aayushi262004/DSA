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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        if(head == NULL || head->next == NULL) return head;
        int cnt=0;
        while(temp != NULL){
            temp=temp->next;
            cnt++;
        }
        temp=head;
        int val=(cnt/2);
        while(val>0){
            temp=temp->next;
            val--;
            
        }
        head=temp;
    return head;
    }
};