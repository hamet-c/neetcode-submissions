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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> merge;
        ListNode* l1 = list1;
        ListNode* l2 = list2;
        while (l1 != nullptr && l2 != nullptr) {
            if (l1->val < l2->val) {
                merge.push_back(l1->val);
                l1 = l1->next;
            } else {
                merge.push_back(l2->val);
                l2 = l2->next;
            }
        }
        while (l1 != nullptr) {
            merge.push_back(l1->val);
            l1 = l1->next;
        }
        while (l2 != nullptr) {
            merge.push_back(l2->val);
            l2 = l2->next;
        }
        ListNode* nxw = new ListNode();
        ListNode* head = nxw;
        for (auto& x : merge) {
            cout << x;
            nxw->next = new ListNode(x);
            nxw = nxw->next;
        }
        
        return head->next;
    }
};

