#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5, pos;

    cout << "Original Array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nEnter position to delete: ";
    cin >> pos;

    for(int i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    cout << "Updated Array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
