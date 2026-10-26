// Read an array and a key. Print whether the key is present and its position; 
//otherwise print "Not found

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
    
    int key;
    cout << "Enter the value of key: ";
    cin >> key;

    int flag = 0;
    for(int i = 0;i<n;i++){
        if(key == arr[i]){
            flag = 1;
            cout << "Key is found at position " << i + 1 << endl;
            break;
        }
    }
    
    if(flag ==0){
        cout<<"key is not found";
    }
    
    return 0;
}