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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pair<int, ListNode*>,vector<pair<int, ListNode*>>, greater<pair<int, ListNode*>>>pq;
        int n = lists.size();
        for(int i=0;i<n;i++){
            if(lists[i])
            pq.push({lists[i]->val, lists[i]});
        }
        ListNode* dummyNode = new ListNode(-1);
        ListNode* dummy = dummyNode;
        while(!pq.empty()){
            int val = pq.top().first;
            ListNode* node = pq.top().second;
            pq.pop();
            ListNode* temp = node;
            dummy->next = temp;
            if(node->next){
                pq.push({node->next->val, node->next});
            }
            dummy = temp;
            

        }
    return dummyNode->next;
    }
};