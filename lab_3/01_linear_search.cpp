//Read n integers and a key. Print the index of the key, or "Not found".

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
    int flag=0;
    for(int i=0;i<n;i++){
        if(key == arr[i]){
            cout<<"The index of the key is "<<i;
            flag = 1;
        }
    }
    if(flag == 0){
        cout<<"The key is not found";
    }
    return 0;
}