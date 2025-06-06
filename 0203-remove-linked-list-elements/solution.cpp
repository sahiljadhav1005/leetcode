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
    ListNode* removeElements(ListNode* head, int val) {
        // ListNode * temp = head;
        // while(temp != NULL)
        // {
        //     if(temp->next->val == val)
        //     {
        //         if(temp->next->next == NULL)
        //         {
        //             delete temp->next;
        //             temp->next = NULL;
        //         }
        //         ListNode * temp1 = temp->next;
        //         temp->next = temp->next->next;
        //         delete temp1->next;
        //     }
        //     temp = temp->next;
        // }
        // return head;

        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* current = dummy;
        while (current->next != nullptr) {
            if (current->next->val == val) {
                ListNode* toDelete = current->next;
                current->next = current->next->next;
                delete toDelete;
            } else {
                current = current->next;
            }
        }
        
        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;

    }
};
