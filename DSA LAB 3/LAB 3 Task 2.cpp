#include <iostream>
using namespace std;

void deleteElement(int *arr, int &n, int pos) {
    for(int i = pos - 1; i < n - 1; i++) {
        *(arr + i) = *(arr + i + 1);
    }
    n--;
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5, pos;

    cout << "Original Array: ";
    for(int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }

    cout << "\nEnter position to delete: ";
    cin >> pos;

    deleteElement(arr, n, pos); 

    cout << "Updated Array: ";
    for(int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }

    return 0;
}
