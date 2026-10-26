// Write int countEven(int a[], int n) that returns how many elements are even. Read the
// array in main and print the count.

#include<iostream>
using namespace std;
int countEven(int arr[], int n){
    int num = 0;
    for(int i=0;i<n;i++){
        if(arr[i]%2 == 0){
            num++;
        }
    }
    return num;
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
     int result = countEven(arr,n);
    cout<<"The total number of even number are presnt in array is "<<result;
    return 0;
}