#include <iostream>
using namespace std;

int main() {
    int arr[5]; 
    int sum = 0;
    float average;

    cout << "Enter 5 numbers: " << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> arr[i];
        sum = sum + arr[i]; 
    }

    
    cout <<"Array is: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    average = sum / 5.0;

    cout << "\nSum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}
