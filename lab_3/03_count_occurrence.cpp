//Read n integers and a key. Print how many times the key appears.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter Array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the value of key: ";
    cin>>key;
    int count = 0;

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            count++;
        }
    }

    cout<<"The total number of times the key appears is "<<count;
    return 0;

}