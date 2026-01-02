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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || k == 1) return head;

        ListNode* ptr = head;
        ListNode* temp = head;
        stack<int> st;

        while (ptr)
        {
            st = stack<int>();
            for (int i = 0; i < k; i++)
            {
                if (!ptr) return head;
                st.push(ptr->val);
                ptr = ptr->next;
            }
            for (int i = 0; i < k; i++)
            {
                temp->val = st.top(); st.pop();
                temp = temp->next;
            }
        }
        return head;
    }
};
