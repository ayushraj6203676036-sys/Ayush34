//Write int search(int a[], int n, int key) that returns the index of key, or -1 if it is absent.

#include <iostream>
using namespace std;
int search(int a[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n, key;

    cout << "Enter size of array: ";
    cin >> n;

    int a[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter key: ";
    cin >> key;

    int result = search(a, n, key);

    if (result != -1) {
        cout << "Key found at index " << result << endl;
    } else {
        cout << "Key not found" << endl;
    }

    return 0;
}