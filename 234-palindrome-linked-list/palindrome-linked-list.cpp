class Solution {
public:

    ListNode* reverseList(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr != NULL){
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {

        if(head == NULL || head->next == NULL)
            return true;

        // Step 1: find middle
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: reverse second half
        ListNode* second = reverseList(slow->next);

        // Step 3: compare
        ListNode* first = head;
        ListNode* temp = second; // for restoring later

        while(second != NULL){
            if(first->val != second->val){
                reverseList(temp); // restore once
                return false;
            }
            first = first->next;
            second = second->next;
        }

        // Step 4: restore (optional)
        reverseList(temp);

        return true;
    }
};