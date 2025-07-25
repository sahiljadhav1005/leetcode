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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if(!head && !head->next)
        {
            return nullptr;
        }

        ListNode * dummy = new ListNode(-1);

        dummy->next = head;

        ListNode * first = dummy;
        ListNode * second = dummy;

        for(int i = 0 ; i <= n ; i++)
        {
            if(!first)
            {
                break;
            }
            first = first->next;
        }

        while(first)
        {
            first = first->next;
            second = second->next;
        }

        ListNode * del = second->next;
        second->next = second->next->next;
        delete del;

        head = dummy->next;
        delete dummy;

        return head;

    }
};
