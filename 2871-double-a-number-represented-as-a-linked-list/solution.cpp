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

    ListNode * reverse(ListNode * head)
    {
        ListNode * prev = nullptr;

        while(head)
        {
            ListNode * temp = head->next;
            head->next = prev;
            prev = head;
            head = temp;
        }

        return prev;
    }

    ListNode* doubleIt(ListNode* head) {
        head = reverse(head);

        ListNode * curr = head;
        int carry = 0;

        while(curr)
        {
            int sum = curr->val * 2 + carry;
            curr->val = sum % 10;
            carry = sum / 10;

            if(!curr->next && carry != 0)
            {
                ListNode * newNode = new ListNode(carry);
                curr->next = newNode;
                break;
            }

            curr = curr->next;
        }

        head = reverse(head);
        return head;
    }
};
