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
      ListNode*temp=head;
      int cnt=0;
      while(temp->next != NULL){
        cnt++;
        temp=temp->next;
      }
      temp=head;  
      if(cnt%2 == 0){
        cnt=cnt/2;
        while(cnt>0){
            temp=temp->next;
            cnt--;
        }
      }else{
        cnt=cnt/2+1;
        while(cnt>0){
            temp=temp->next;
            cnt--;
        }
      }
    return temp;
    }
};