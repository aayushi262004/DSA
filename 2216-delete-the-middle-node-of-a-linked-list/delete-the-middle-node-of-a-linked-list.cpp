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
        int cnt=0;
        if(head->next==NULL){
           
            return NULL;
        }
        ListNode*temp=head;
        while(temp!=NULL){
            temp=temp->next;
            cnt++;
        }
        int mid=cnt/2;
        temp=head;

        for(int i=0;i<mid-1;i++){
            temp=temp->next;
        }
        
        temp->next=temp->next->next;
     
        return head;

    }
};