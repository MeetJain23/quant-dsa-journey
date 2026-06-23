
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

Node* removeNthFromEnd(Node* head, int N) {
  

    int length = 0;
    Node* curr = head;
    while (curr != nullptr) {
        length++;
        curr = curr->next;
    }

    int target = length - N + 1;

    if (target == 1) {
        Node* newHead = head->next;
      
        delete head; 
        return newHead;
    }

    curr = head;
    for (int i = 1; i < target - 1; i++) {
        curr = curr->next;
    }

    Node* nodeToDelete = curr->next;
    curr->next = curr->next->next;
    delete nodeToDelete;  

    return head;
}

void printList(Node* node) {
    Node* curr = node;
    while (curr != nullptr) {
        cout << " " << curr->data;
        curr = curr->next;
    }
}

int main() {
  
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    int N = 2;
    head = removeNthFromEnd(head, N);

    printList(head);  

    return 0;
}