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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* ans = new ListNode(0);
        ListNode* p = ans;
        while(head->next){
            int x = head->val;
            int y = head->next->val;
            ans->next = new ListNode(x);
            ans = ans->next;
            ans->next =new ListNode(__gcd(x,y));
            ans = ans->next;
            head = head->next;
        }
        ans->next = head;
        return p->next;
    }
};