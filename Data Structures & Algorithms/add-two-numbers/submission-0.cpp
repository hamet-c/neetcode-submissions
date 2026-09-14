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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        bool carry = false;
        ListNode* curr1 = l1;
        ListNode* curr2 = l2;
        ListNode* res = new ListNode(0, nullptr);
        ListNode* currRes = res;
        while (curr1 != nullptr && curr2 != nullptr) {
            int x = curr1->val + curr2->val + carry;
            currRes->val = (curr1->val + curr2->val + carry) % 10;
            if (x >= 10) {
                carry = true;
            } else {
                carry = false;
            }
            curr1 = curr1->next;
            currRes->next = new ListNode();
            curr2 = curr2->next;
            currRes = currRes->next;
        }
        while (curr1 != nullptr) {
            int x = (curr1->val + carry);
            currRes->val = (curr1->val + carry) % 10;
            if (x >= 10) {
                carry = true;
            } else {
                carry = false;
            }
            curr1 = curr1->next;
            currRes->next = new ListNode();
            currRes = currRes->next;
        }
        while (curr2 != nullptr) {
            int x = (curr2->val + carry);
            currRes->val = (curr2->val + carry) % 10;
            if (x >= 10) {
                carry = true;
            } else {
                carry = false;
            }
            curr2 = curr2->next;
            currRes->next = new ListNode();
            currRes = currRes->next;
        }
        if (carry) {
            currRes->val = carry;
        } else {
            currRes = res;
            while (currRes->next->next != nullptr) {
                currRes = currRes->next;
            }
            delete currRes->next;
            currRes->next = nullptr;
        }
        return res;
    }
};