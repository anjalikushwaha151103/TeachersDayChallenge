//REMOVE LINKED LIST ELEMENTS
//Statement -  Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.

#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(-1);
        dummy.next = head;

        ListNode* current = &dummy;
        while (current->next) {
            if (current->next->val == val) {
                ListNode* toDelete = current->next;
                current->next = current->next->next;
                delete toDelete;
            } else {
                current = current->next;
            }
        }
        return dummy.next;
    }
};
