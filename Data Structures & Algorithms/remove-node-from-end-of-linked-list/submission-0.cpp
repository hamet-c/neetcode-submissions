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
        int count = 0;
        ListNode* curr = head;
        if (head == nullptr) {
            return head;
        }
        vector<int> comp;
        while (curr != nullptr) {
            comp.push_back(curr->val);
            curr = curr->next;
        }
        for (int i = comp.size() - 1; i >= 0; i--) {
            count = i + 1;
            if (n == 1) {
                break;
            }
            n--;
        }
        curr = head;
        ListNode* prev = curr;
        if (count == 1) {
            head = head->next;
            return head;
        }
        int up = 1;
        while (curr != nullptr) {
            if (up == count) {
                prev->next = curr->next;
                curr = nullptr;
                break;
            }
            prev = curr;
            curr = curr->next;
            up++;
        }
        return head;
    }
};