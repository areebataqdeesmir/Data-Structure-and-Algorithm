#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

Node* head = NULL;

void insertAtBeginning(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = head;
    if (head != NULL) {
        head->prev = newNode;
    }
    head = newNode;
}

void display() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    insertAtBeginning(50);
    insertAtBeginning(40);
    insertAtBeginning(30);
    insertAtBeginning(20);
    insertAtBeginning(10);

    cout << "Before: ";
    display();

    int value;
    cout << "Enter value to insert at beginning: ";
    cin >> value;

    insertAtBeginning(value);

    cout << "After Insert: ";
    display();
    return 0;
}
