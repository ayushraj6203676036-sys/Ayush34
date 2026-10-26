//Write int countKey(int a[], int n, int key) that returns how many times the key appears.
// Call it from main and print the count.

#include<iostream>
using namespace std;

int countkey(int arr[], int n, int key){
    int count = 0;
    for(int i=0;i<n;i++){
        if(key == arr[i]){
            count++;
        }
    }
    return count;
}

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
    int result = countkey(arr,n,key);
    cout<<"The key appears in array is "<<result<<" time";
    return 0;
}