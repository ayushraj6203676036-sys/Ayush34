// Write int sum(int a[], int n) and int maxOf(int a[], int n). Read an array in main and print
// both results.


#include <iostream>
using namespace std;

// Function to calculate sum
int sum(int a[], int n) {
    int total = 0;

    for (int i = 0; i < n; i++) {
        total = total + a[i];
    }

    return total;
}

// Function to find maximum
int maxOf(int a[], int n) {
    int maximum = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > maximum) {
            maximum = a[i];
        }
    }

    return maximum;
}

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int a[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Sum = " << sum(a, n) << endl;
    cout << "Maximum = " << maxOf(a, n) << endl;

    return 0;
}