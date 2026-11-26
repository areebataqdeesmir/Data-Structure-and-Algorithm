#include <iostream>
using namespace std;

void insertElement(int arr[], int &n, int pos, int value) {
    for(int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;
    n++;
}

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5, pos, value;

    cout << "Original Array: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";

    cout << "\nEnter position: ";
    cin >> pos;
    cout << "Enter value to insert: ";
    cin >> value;

    insertElement(arr, n, pos, value);

    cout << "Updated Array: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}
