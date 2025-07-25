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
    bool isPalindrome(ListNode* head) {
        if(!head && !head->next)
        {
            return true;
        }

        // step 1 : find the middle of list

        ListNode * slow = head;
        ListNode * fast = head;

        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        // step 2 : reverse the half list

        ListNode * curr = slow;
        ListNode * prev = nullptr;

        while(curr)
        {
            ListNode * temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        // step 3 : compare both half

        ListNode * first = head;
        ListNode * second = prev;

        while(second)
        {
            if(first->val != second->val)
            {
                return false;
            }
            first = first->next;
            second = second->next;
        }

        return true;
    }
};
