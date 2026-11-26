#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key, found = 0;

    cout << "Array is: 10 20 30 40 50" << endl;
    cout << "Enter value to search: ";
    cin >> key;


    for (int i = 0; i < 5; i++) {
        if (arr[i] == key) {
            cout << "Found! " << key << " is at position " << i + 1 << endl;
            found = 1;
            break;
        }
    }

    if (found == 0) {
        cout << key << " is not in the array." << endl;
    }

    return 0;
}
