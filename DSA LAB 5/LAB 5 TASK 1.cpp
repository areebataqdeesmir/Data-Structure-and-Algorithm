#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key;
    int low = 0, high = 4, mid;
    int found = 0;

    cout << "Array is: 10 20 30 40 50" << endl;
    cout << "Enter value to search: ";
    cin >> key;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            cout << "Found! " << key << " is at position " << mid + 1 << endl;
            found = 1;
            break;
        }
        else if (key < arr[mid]) {
            high = mid - 1; 
        }
        else {
            low = mid + 1; 
        }
    }

    if (found == 0) {
        cout << key << " is not in the array." << endl;
    }

    return 0;
}
