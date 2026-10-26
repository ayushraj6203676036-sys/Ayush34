// Read an array of n integers, insert a given value at a given index, and print the new array. (Notice
//how the elements after the position shift right.)

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of Array: ";
    cin >> n;

    int arr[n+1];

    cout << "Array: "<<endl;
    for (int i = 0; i < n; i++) {
        cout<<"Enter "<< i+1 << " element: ";
        cin >> arr[i];
    }
    int index,value;
    cout<<"Enter the index: ";
    cin>>index;
    cout<<"Enter the value: ";
    cin>>value;

    for(int i = n;i>index;i--){
        arr[i] = arr[i-1];
    }

    arr[index] = value;
    cout<<"Final Array: ";
    for(int i=0;i<n+1;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}