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
    ListNode* swapPairs(ListNode* head) {
        // Base case: if list is empty or has only 1 node
        if (head == nullptr || head->next == nullptr)
            return head;

        // Step 1: Identify the two nodes to swap
        ListNode* first = head;
        ListNode* second = head->next;

        // Step 2: Recursive call for the rest of the list
        first->next = swapPairs(second->next);

        // Step 3: Complete the current pair swap
        second->next = first;

        // New head is the second node
        return second;

    }
};
