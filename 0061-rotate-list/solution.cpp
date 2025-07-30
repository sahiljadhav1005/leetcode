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
    ListNode* rotateRight(ListNode* head, int k) {

        if (!head || !head->next || k == 0) 
        {
            return head;
        }

        int length = 1;
        ListNode * temp = head;
        while(temp->next)
        {
            temp = temp->next;
            length++;
        }

        k = k % length;
        if (k == 0) return head;

        temp->next = head;

        int newLastNode = length - k;

        ListNode * temp1 = head;
        for(int i = 1; i < newLastNode; i++)
        {
            temp1 = temp1->next;
        }

        ListNode * newHead = temp1->next;
        temp1->next = nullptr;

        return newHead;
    }
};
