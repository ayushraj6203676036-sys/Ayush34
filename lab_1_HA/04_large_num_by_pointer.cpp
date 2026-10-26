// Find the largest element by walking the array with a pointer.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Array: ";
    for(int i = 0;i<n;i++){
        cin>>*(arr+i);
    }
    int largest = arr[0];
    for(int i =1;i<n;i++){
        if(*(arr+i)>largest){
            largest = *(arr+i);
        }
    }
    cout<<"The largest value is "<<largest<<endl;
    return 0;
}