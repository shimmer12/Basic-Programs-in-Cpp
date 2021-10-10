// Selection sort algorithm in cpp

#include <iostream>
using namespace std;

int main () {
    int n, i, j, min, temp;
    cout << "Enter the number of elements: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements: ";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (i = 0; i < n; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    cout << "Sorted array: ";
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}