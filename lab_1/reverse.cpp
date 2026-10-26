#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of Array: ";
    cin >> n;

    int arr[n];

    cout << "Array: "<<endl;
    for (int i = 0; i < n; i++) {
        cout<<"Enter the "<< i+1 << " element: ";
        cin >> arr[i];
    }

    cout << "Array in reverse order: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}