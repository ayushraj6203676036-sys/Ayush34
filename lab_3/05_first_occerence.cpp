//In a sorted array that may contain duplicates, 
//use binary search to print the index of the first occurrence of the key.

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

    int low=0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==key){
            cout<<"The index of key is "<<mid;
            break;
        }
        else if(arr[mid]<key){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return 0;

}