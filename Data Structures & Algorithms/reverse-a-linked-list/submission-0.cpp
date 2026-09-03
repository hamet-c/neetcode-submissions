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
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) {
            return head;
        }
        ListNode* left = nullptr;
        ListNode* right = head;
        ListNode* temp;
        while (right != nullptr) {
            temp = right->next;
            right->next = left;
            left = right;
            right = temp;
        }
        return left;
    }
};

//head->3->5->3->null