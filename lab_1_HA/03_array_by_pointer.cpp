#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Array: ";
    for(int i =0;i<n;i++){
        cin>>*(arr+i);
    }

    cout<<"Array print by using pointer: ";
    for(int i =0;i<n;i++){
        cout<<*(arr+i)<<" ";
    }
    return 0;
}