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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;
        
        ListNode* temp = head->next;
        int sum = 0;
        
        while (temp != nullptr) {
            if (temp->val != 0) {
                sum += temp->val;
            } else {
                if (sum != 0) {
                    current->next = new ListNode(sum);
                    current = current->next;
                    sum = 0;
                }
            }
            temp = temp->next;
        }
        
        return dummy->next;
    }
};