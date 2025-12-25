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
private:
    ListNode* conquer(ListNode* l1, ListNode* l2) {
        if (!l1) return l2;
        if (!l2) return l1;

        if (l1->val < l2->val)
        {
            l1->next = conquer(l1->next, l2);
            return l1;
        }
        else
        {
            l2->next = conquer(l1, l2->next);
            return l2;
        }
    }

    ListNode* divide(vector<ListNode*>& lists, int i, int j) {
        if (i == j) return lists[i];

        int m = i + (j-i)/2;
        ListNode* l1 = divide(lists, i, m);
        ListNode* l2 = divide(lists, m+1, j);
        return conquer(l1, l2);
    }

public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty()) return nullptr;
        return divide(lists, 0, lists.size() - 1);
    }
};
