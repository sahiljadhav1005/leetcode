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
        // ListNode * temp = head;
        // ListNode * dummy = new ListNode(0);

        // while(temp)
        // {
        //     if(temp->val == 0)
        //     {
        //         int sum = 0;

        //         temp = temp->next;
        //         while(temp->val != 0)
        //         {
        //             sum += temp->val;
        //             temp = temp->next;
        //         }

        //         ListNode * newNode = new ListNode(sum);
        //         dummy->next = newNode;  
        //     }
        // }

        // return dummy->next;

        ListNode* temp = head->next; // Skip the first 0 node
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;

        int sum = 0;

        while (temp) {
            if (temp->val == 0) {
                // End of segment, add new node
                current->next = new ListNode(sum);
                current = current->next;
                sum = 0;
            } else {
                sum += temp->val;
            }
            temp = temp->next;
        }

        return dummy->next;
    }
};
