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
        if (!head) return head;

        ListNode* newHead = new ListNode(0, head);
        ListNode* ptr = newHead;

        while (ptr) {
            while (ptr->next && ptr->next->val == val) {
                ListNode* temp = ptr->next;
                ptr->next = ptr->next->next;
                delete temp;
            }
            ptr = ptr->next;
        }

        ptr = newHead->next;
        delete newHead;
        return ptr;
    }
};
