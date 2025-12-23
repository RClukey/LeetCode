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
        if (!head || (!head->next && n == 1)) return NULL;
        
        ListNode* dummy = new ListNode(0, head);
        ListNode* ptr = dummy;

        for (int i = 1; i <= n; i++) head = head->next;

        while (head) {
            head = head->next;
            ptr = ptr->next;
        }

        ListNode* temp = ptr->next;
        ptr->next = ptr->next->next;
        delete temp;

        temp = dummy->next;
        delete dummy;
        return temp; 
    }
};
