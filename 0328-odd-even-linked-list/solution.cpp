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
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next)
        {
            return head;
        }

        ListNode* odd = head;              // Points to the first odd node
        ListNode* even = head->next;       // Points to the first even node
        ListNode* evenHead = even;         // Save even list head for final conn

        while (even && even->next) 
        {
            odd->next = even->next;        // Link current odd to next odd
            odd = odd->next;               // Move odd forward

            even->next = odd->next;        // Link current even to next even
            even = even->next;             // Move even forward
        }

        odd->next = evenHead;              // Attach even list after odd list
        return head;
    }
};
