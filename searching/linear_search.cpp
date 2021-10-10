// Linear Search impplementation in cpp
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "Enter the key to search: ";
    cin >> key;
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Key found at index " << i << endl;
            break;
        }
    }
    if (i == n) {
        cout << "Key not found" << endl;
    }
    return 0;
}