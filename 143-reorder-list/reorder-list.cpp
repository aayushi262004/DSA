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
    ListNode* reverse(ListNode* root){
        ListNode* prev = NULL;
        ListNode* temp = root;
        while(temp!= NULL){
            ListNode* save = temp->next;
            temp->next = prev;
            prev = temp ;
            temp = save;
        }
    return prev;
    }
    void reorderList(ListNode* head) {
        if(head == NULL || head->next == NULL)return;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* p = NULL;
        while(fast!= NULL && fast->next != NULL){
            p = slow;
            slow = slow->next;
            fast= fast->next->next;
        }
        
        ListNode* p2 = reverse(slow);
        p->next = NULL;
        ListNode* temp = head;
        ListNode* dummyNode = new ListNode(-1);
        ListNode* dummy = dummyNode;
        while(temp != NULL && p2!= NULL){
            ListNode* save1 = temp->next;
            ListNode* save2 = p2->next;
            dummy->next = temp;
            dummy = dummy->next;
            dummy->next = p2;
            dummy = dummy->next;
            temp = save1;
            p2= save2;


        }
        while(p2 != NULL){
            dummy->next = p2;
            p2 = p2->next;
        }
    //return dummyNode->next;
    }
};