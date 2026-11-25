#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

Node* head = NULL;

void insertAtEnd(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;
    if (head == NULL) {
        newNode->prev = NULL;
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void display() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void search(int value) {
    Node* temp = head;
    int position = 1;
    while (temp != NULL) {
        if (temp->data == value) {
            cout << "Search Found! Value " << value << " is at position " << position << endl;
            return;
        }
        temp = temp->next;
        position++;
    }
    cout << "Not Found! Value " << value << " is not in the list." << endl;
}

int main() {
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    insertAtEnd(40);
    insertAtEnd(50);

    cout << "List: ";
    display();

    int value;
    cout << "Enter value to search: ";
    cin >> value;

    search(value);
    return 0;
}
