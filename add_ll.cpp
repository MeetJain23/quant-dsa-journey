
#include <iostream>
using namespace std;

class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       	data = x;
        next = nullptr;
    }
};

int addWithCarry(Node *head) {
 
    if (head == nullptr) {
        return 1;
    }

    int res = head->data + addWithCarry(head->next);

    head->data = res % 10;
    return res / 10;
}

Node *addOne(Node *head) {

    int carry = addWithCarry(head);

    if (carry) {
        Node *newNode = new Node(carry);
        newNode->next = head;

      	return newNode; 
    }

    return head;
}

void printList(Node *head) {
    Node *curr = head;
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {

    Node *head = new Node(1);
    head->next = new Node(9);
    head->next->next = new Node(9);
    head->next->next->next = new Node(9);
  
    head = addOne(head);

    printList(head);

    return 0;
}