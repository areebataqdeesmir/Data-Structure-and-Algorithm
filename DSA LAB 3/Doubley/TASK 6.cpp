#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

int main() {
    // Create five nodes dynamically using new keyword
    Node* node1 = new Node();
    Node* node2 = new Node();
    Node* node3 = new Node();
    Node* node4 = new Node();
    Node* node5 = new Node();

    // Take five integer values from the user
    cout << "Enter 5 values: ";
    cin >> node1->data;
    cin >> node2->data;
    cin >> node3->data;
    cin >> node4->data;
    cin >> node5->data;

    // Connect all five nodes using prev and next pointers
    // First node
    node1->prev = NULL;
    node1->next = node2;

    // Second node
    node2->prev = node1;
    node2->next = node3;

    // Third node
    node3->prev = node2;
    node3->next = node4;

    // Fourth node
    node4->prev = node3;
    node4->next = node5;

    // Fifth node
    node5->prev = node4;
    node5->next = NULL;

    Node* head = node1;
    Node* tail = node5;

    // Display using Forward Traversal
    cout << "\nForward Traversal:" << endl;
    Node* temp = head;
    int count = 0;
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        count++;
        temp = temp->next;
    }
    cout << "NULL" << endl;

    // Display using Backward Traversal
    cout << "\nBackward Traversal:" << endl;
    temp = tail;
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }
    cout << "NULL" << endl;

    // Count and display total number of nodes
    cout << "\nTotal Nodes: " << count << endl;

    return 0;
}
