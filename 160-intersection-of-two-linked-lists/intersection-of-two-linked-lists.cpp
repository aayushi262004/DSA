BRUTE FORCE

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*temp;
        while(headA !=NULL){
            temp=headB;
            while(temp!=NULL){
                if(headA==temp){
                    return headA;
                }
                temp=temp->next;
            }
            headA=headA->next;
        }
        return NULL;
    }
};

USING HASHMAP
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode* ,int>mpp;
        while(headA!=NULL){
            mpp[headA]++;
            headA=headA->next;
        }
        while(headB!=NULL){
            if(mpp[headB]>0){
                return headB;
            }
            headB=headB->next;
        }
    return NULL;
    }
};
