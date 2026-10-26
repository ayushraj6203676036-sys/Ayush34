//on a sorted array, write a recursive binary search that returns the index of the key, or -1.

#include<iostream>
using namespace std;
int index_key(int arr[], int low,int high, int key){
   if(low>high){
        return -1;
   }
   int mid = (low+high)/2;
   if(arr[mid] == key){
        return mid;
   }
   else if (key<arr[mid]){
        return index_key(arr,low,mid-1,key);
   }
   else{
        return index_key(arr,mid+1,high,key);
   }
   
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
    int result = index_key(arr,0,n-1,key);
    cout<<"The index of key is "<<result;
    return 0;
}