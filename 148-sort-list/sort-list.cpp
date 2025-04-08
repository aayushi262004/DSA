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
    ListNode* mergeSortll(ListNode* list1,ListNode* list2){
        ListNode* dummyNode= new ListNode(-1);
        ListNode* temp=dummyNode;
        while(list1 != nullptr && list2!= nullptr){
            if(list1->val<=list2->val){
                temp->next=list1;
                list1=list1->next;
            }else{
                temp->next=list2;
                list2=list2->next;
            }
            temp=temp->next;
        }
        if(list1!=nullptr){
            temp->next=list1;
        }else{
            temp->next=list2;
        }
        return dummyNode->next;
    }
public:
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*right=slow->next;
        slow->next=NULL;
        ListNode*left=head;
        left=sortList(left);
        right=sortList(right);
        return mergeSortll(left,right);
        
    }
};