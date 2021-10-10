// Merge Sort Algorithm in Cpp

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int temp[n];
    int mid = n / 2;
    int i = 0;
    int j = mid;
    int k = 0;
    while (i < mid && j < n) {
        if (arr[i] < arr[j]) {
            temp[k] = arr[i];
            i++;
        } else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }
    while (i < mid) {
        temp[k] = arr[i];
        i++;
        k++;
    }
    while (j < n) {
        temp[k] = arr[j];
        j++;
        k++;
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}