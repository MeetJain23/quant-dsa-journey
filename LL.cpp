#include <iostream>

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;
    while (curr != nullptr) {
        ListNode* nextNode = curr->next; // Track the remaining list
        curr->next = prev;              // Reverse the link
        prev = curr;                    // Move prev forward
        curr = nextNode;                // Move curr forward
    }
    return prev; // New head of reversed list
}
