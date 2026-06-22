#include <iostream>
#include<vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};


Node* mergeTwo(Node* head1, Node* head2) {
    

    Node* dummy = new Node(-1);
    Node* curr = dummy;


    while (head1 != nullptr && head2 != nullptr) {
      

        if (head1->data <= head2->data) {
            curr->next = head1;
            head1 = head1->next;
        } else {
            curr->next = head2;
            head2 = head2->next;
        }
        curr = curr->next;
    }

    if (head1 != nullptr) {
        curr->next = head1;
    } else {
        curr->next = head2;
    }

    return dummy->next;
}

Node* mergeKLists(vector<Node*>& arr) {
  

    Node *res = nullptr;
    

    for (Node *node : arr) 
        res = mergeTwo(res, node);
        
    return res;
}

void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data;
        if(node->next)
        cout<<" -> ";
        node = node->next;
    }
}

int main() {
    int k = 3; 
  
    vector<Node*> arr(k);

    arr[0] = new Node(1);
    arr[0]->next = new Node(3);
    arr[0]->next->next = new Node(5);
    arr[0]->next->next->next = new Node(7);

    arr[1] = new Node(2);
    arr[1]->next = new Node(4);
    arr[1]->next->next = new Node(6);
    arr[1]->next->next->next = new Node(8);

    arr[2] = new Node(0);
    arr[2]->next = new Node(9);
    arr[2]->next->next = new Node(10);
    arr[2]->next->next->next = new Node(11);
    
    Node* head = mergeKLists(arr);

    printList(head);

    return 0;
}