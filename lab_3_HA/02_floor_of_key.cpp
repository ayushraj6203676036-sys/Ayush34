//In a sorted array, find the floor of the key — the largest element that is ≤ key.
// Print it, or "none" if every element is larger.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Array: ";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key: ";
    cin>>key;
    int floor;
    bool found = false;

    for(int i =0;i<n;i++){
        if(arr[i]<=key){
            floor = arr[i];
            found = true;
        }
        else{
            break;
        }
    }
    if(found == true){
        cout<<"Floor: "<<floor<<endl;
    }
    else{
        cout<<"NONE"<<endl;
    }
    return 0;
}