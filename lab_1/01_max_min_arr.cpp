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

    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if(arr[i]> max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout << "Maximum value = " << max << endl;
    cout << "Minimum value = " << min << endl;
    return 0;
}